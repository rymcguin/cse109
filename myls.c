// Ryan McGuiness
// Prof Montella
// CSE-109
// July 15,2019
// rcm421@lehigh.edu

#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<dirent.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <pwd.h>
#include <grp.h>
#include <time.h>
#include <langinfo.h>

DIR *opendir(const char *direntA);
int main(int argc, char** argv) {
  struct dirent *directEntry;
  struct dirent **listNames;
  int numFiles = scandir(".", &listNames, NULL, alphasort);
  int listAll = 0;
  int longList = 0;
  int directList = 0;
  int reverse = 0;
  int i;
  DIR * dr = opendir(".");
  if (dr == NULL) {
    printf("Could not open current directory\n");
    return 0;
  }
  
  for (i = 0; i < argc; i++) {
    if (strcmp(argv[i], "-l") == 0) {
        listAll = 1;
    }
    if (strcmp(argv[i], "-a") == 0) {
       longList = 1;
    }
    if(strcmp(argv[i], "-d") == 0) {
        directList = 1;
    }
    if(strcmp(argv[i], "-r") == 0){
        reverse = 1;
    }
  }

while ((directEntry = readdir(dr)) != NULL) {
    char * fileName = directEntry->d_name;
    if (fileName[0]!= '.' || listAll == 1) {
        for(i =0 ; i < numFiles; i++) {
        printf("%s\n", listNames[i]->d_name);
        }
        free(listNames);
        exit(EXIT_SUCCESS);
    }
    if(longList == 1){
        struct dirent *dr;
        struct stat statbuf;
        struct passwd *pwd;
        struct group *grp;
        struct tm *time;
        DIR* dir = opendir("/home");
        char date[256];
        while ((dr = readdir(dir)) != NULL) {
            if (stat(dr->d_name, &statbuf) == -1){
                continue;
            }
            printf("%4d", statbuf.st_nlink);

            if ((pwd = getpwuid(statbuf.st_uid)) != NULL){
                printf(" %-8.8s", pwd->pw_name);
            }else{
                printf(" %-8d", statbuf.st_uid);
            }

            if ((grp = getgrgid(statbuf.st_gid)) != NULL){
                printf(" %-8.8s", grp->gr_name);
            }else{
                printf(" %-8d", statbuf.st_gid);
            }
    
            printf(" %9jd bytes", (intmax_t)statbuf.st_size);
            time = localtime(&statbuf.st_mtime);

            strftime(date, sizeof(date), nl_langinfo(D_T_FMT), time);


            printf(" %s %s\n", date, dr->d_name);
        }
    }
    if(directList == 1){
        for(i = 0; i < numFiles; i++) {
            if(fileName[i] == '.'|| strcmp(&fileName[i], "..") == 0) {
                printf("%s\n", listNames[i]->d_name);
                free(listNames[i]);
            }
        }
        free(listNames);
        exit(EXIT_SUCCESS);
    }
    if(reverse == 1){
            if(n == -1){
                perror("scandir");
                exit(EXIT_FAILURE);
            }
            for(i = numFiles; i > 0; i--){
                printf("%s\n", listNames[i]->d_name);
                free(listNames[i]);
                
                }
            free(listNames);
            exit(EXIT_SUCCESS);
            }   
    } 
    closedir(dr);
    return 0;
}
