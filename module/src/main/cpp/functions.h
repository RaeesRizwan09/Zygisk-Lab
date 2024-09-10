#ifndef ZYCHEATS_SGUYS_FUNCTIONS_H
#define ZYCHEATS_SGUYS_FUNCTIONS_H

// here you can define variables for the patches
bool Unlimited;

int (*old_Health)(void *instance);
int new_Health(void *instance) {
    if (instance != NULL && Unlimited) {
        return INT_MAX;
    }
    return old_Health(instance);
}

#endif //ZYCHEATS_SGUYS_FUNCTIONS_H
