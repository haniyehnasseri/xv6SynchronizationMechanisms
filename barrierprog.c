#include "types.h"
#include "stat.h"
#include "user.h"



int main(){
    initbarrier();
    int i;
    for(i = 0; i < 4;i++){
        long long z = 0;
        for(long j = 0; j < 100000000; j++){
            for(long k = 0; k < 100000000; k++){
                for(long l = 0; l < 100000000; l++){
                    for(long m = 0; m < 100000000; m++){
                        for(long n = 0; n < 100000000; n++){
                            z = (long long) 333333333 * (long long) 40000000 ;   
                        }
                    }
                }
            }
        }
        z = z + 1;
        int f = fork();
        if(f == 0){
        if(i == 0){
            for(int j = 0; j < 1000000; j++){
                continue;
            }
            barrier();
            exit();
        }

        if(i == 1){
            for(int j = 0; j < 1000000; j++){
                continue;
            }
            barrier();
            exit();

        }

        if(i == 2){
            for(int j = 0; j < 1000000; j++){
                continue;
            }
            barrier();
            exit();

        }

        if(i == 3){
            for(int j = 0; j < 1000000; j++){
                continue;
            }
            barrier();
            exit();

        }
        }
    }


    while(wait() > 0);

    exit();

}