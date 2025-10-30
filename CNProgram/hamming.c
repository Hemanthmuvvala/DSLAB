#include <stdio.h> 
// Function to calculate parity bits and generate Hamming code 
void generateHammingCode(int data[], int hcode[]) { 
    // Assign data bits to proper positions in the code 
    // Positions: 1 2 3 4 5 6 7 (P1,P2,D1,P4,D2,D3,D4) 
    hcode[2] = data[0]; // D1 
    hcode[4] = data[1]; // D2 
    hcode[5] = data[2]; // D3 
    hcode[6] = data[3]; // D4 
    // Calculate parity bits for even parity 
    hcode[0] = hcode[2] ^ hcode[4] ^ hcode[6]; // P1 
    hcode[1] = hcode[2] ^ hcode[5] ^ hcode[6]; // P2 
    hcode[3] = hcode[4] ^ hcode[5] ^ hcode[6]; // P4 
} 
 
int main() { 
    int data[4], hcode[7]; 
    printf("Enter 4 data bits (space-separated): "); 
    for(int i = 0; i < 4; i++) 
        scanf("%d", &data[i]); 
    generateHammingCode(data, hcode); 
 
    printf("Generated 7-bit Hamming code: "); 
    for(int i = 0; i < 7; i++) 
        printf("%d ", hcode[i]); 
    printf("\n"); 
 
    // Optionally simulate an error 
    char opt; 
    printf("Simulate error? (y/n): "); 
    scanf(" %c", &opt); 
    if(opt == 'y' || opt == 'Y') { 
        int pos; 
        printf("Enter bit position to flip (1-7): "); 
        scanf("%d", &pos); 
        if(pos >= 1 && pos <=7) { 
            hcode[pos-1] ^= 1; 
            printf("Codeword after error: "); 
            for(int i = 0; i < 7; i++) 
                printf("%d ", hcode[i]); 
            printf("\n"); 
        } 
    } 
    // Decode: error detection and correction 
    int p[3]; 
    // parity checks: P1 (positions 0,2,4,6), P2 (1,2,5,6), P4 (3,4,5,6) 
    p[0] = hcode[0] ^ hcode[2] ^ hcode[4] ^ hcode[6]; 
    p[1] = hcode[1] ^ hcode[2] ^ hcode[5] ^ hcode[6]; 
    p[2] = hcode[3] ^ hcode[4] ^ hcode[5] ^ hcode[6]; 
    int error_pos = p[2]*4 + p[1]*2 + p[0]*1; // binary to decimal 
    if(error_pos == 0) { 
        printf("No error detected in received code.\n"); 
    } else { 
        printf("Error detected at bit position %d (counting from 1).\n", error_pos); 
        hcode[error_pos-1] ^= 1; // Correct error 
        printf("Corrected code: "); 
        for(int i = 0; i < 7; i++) 
            printf("%d ", hcode[i]); 
        printf("\n"); 
    } 
    printf("Extracted data bits: %d %d %d %d\n", hcode[2], hcode[4], hcode[5], hcode[6]); 
 
    return 0; 
}
