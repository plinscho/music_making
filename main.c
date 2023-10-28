#include <stdio.h>
#include <stdlib.h>
#include <AL/al.h>
#include <AL/alc.h>

int main() {
    // Open the default audio device
    ALCdevice *dev = alcOpenDevice(NULL);
    if (!dev) {
        // Handle error
        return -1;
    }
    
    // Close the audio device when done
    alcCloseDevice(dev);
    
    return 0;
}