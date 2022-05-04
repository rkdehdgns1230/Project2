#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <time.h>

struct stat stat1, stat2;
struct tm *time1, *time2;

void filestat1();
void filestat2();
void filetime1();
void filetime2();
void sizecmp();
void blockcmp();
void datecmp();
void timecmp();

int main(){
    filestat1();
    filestat2();
    filetime1();
    filetime2();
    sizecmp();
    blockcmp();
    datecmp();
    timecmp();
}

//파일 1의 정보를 가져오는 함수 작성
void filestat1(){
    stat('./text1', &stat1);
}

//파일 2의 정보를 가져오는 함수 작성
void filestat2(){
    stat("./text2", &stat2);
}

//파일 1의 시간 정보를 가져오는 함수 작성
void filetime1(){

}

//파일 2의 시간 정보를 가져오는 함수 작성
void filetime2(){

}

//두 개의 파일 크기를 비교하는 함수 작성
void sizecmp(){
    int size_of_file1 = stat1.st_size;
    int size_of_file2 = stat2.st_size;

    printf("Compare size between two files.\n");

    if (size_of_file1 > size_of_file2) {
        printf("text_1 is bigger than text_2.\n");
    }

    else if (size_of_file2 > size_of_file1) {
        printf("text_2 is biggerthan text_1.\n");
    }

    else {
        printf("They have same size.\n");
    }

    printf("\n");
}

//두 개의 파일 블락 수를 비교하는 함수 작성
void blockcmp(){
    
}

//두 개의 파일 수정 날짜를 비교하는 함수 작성
void datecmp(){
    printf("Date Compare\n");

    time_first = localtime(&stat1.st_mtime);
    int time_first_month = time_first->tm_mon;
    int time_first_day = time_first->tm_mday;
    int time_first_year = time_first->tm_year;

    time_second = localtime(&stat2.st_mtime);
    int time_second_month = time_second->tm_mon;
    int time_second_day = time_second->tm_mday;
    int time_second_yeqr = time_second->tm_year;

    if (time_first_year < time_second_yeqr) {
        printf("Text1 is early.\n");
    }
    else if (time_first_month < time_second_month) {
        printf("Text2 is early.\n");
    }
    else
    {
        if (time_first_day < time_second_day) {
            printf("Text1 is early.\n");
        }
        else if (time_first_day > time_second_day) {
            printf("Text2 is early.\n");
        }
        else {
            printf("Same date.\n");
        }
    }
    printf("\n");
}

//두 개의 파일 수정 시간을 비교하는 함수 작성
void timecmp(){
    
}