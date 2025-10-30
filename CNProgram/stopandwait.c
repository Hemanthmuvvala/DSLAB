#include <stdio.h> 
 
int main() { 
    int total_frames; 
    int frame, ack; 
 
    printf("Enter the total number of frames to send: "); 
    scanf("%d", &total_frames); 
 
    frame = 0; 
    while (frame < total_frames) { 
        printf("Sender: Sending Frame %d\n", frame); 
        // Simulate receiver input: frame received or lost (-1) 
        printf("Receiver: Enter received frame number (or -1 if the frame is lost): "); 
        int recv; 
        scanf("%d", &recv); 
 
        if (recv == frame) { 
            printf("Receiver: Frame %d received. Sending ACK %d\n", recv, recv); 
            ack = recv; 
        } else { 
            printf("Receiver: Frame lost or out-of-order. No ACK sent.\n"); 
            ack = -1; 
        } 
 
        // Simulate Sender reading ACK 
        if (ack == frame) { 
            printf("Sender: ACK %d received. Proceeding to next frame.\n\n", ack); 
            frame++; 
        } else { 
            printf("Sender: No valid ACK received. Retransmitting Frame %d...\n\n", frame); 
            // Do not increment frame; retransmit the same frame 
        } 
    } 
 
    printf("All frames sent and acknowledged!\n"); 
    return 0; 
}
