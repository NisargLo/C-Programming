//Shutdown Windows/Linux Shutdown Machine. [#include <stdlib.h> to be used for system() function]

#include<stdio.h>
#include<stdlib.h>
//shutdown - /s
//restart - /r
//help - /?
//graphical user interface - /i
//log off - /l
void main() {
     system("C:\\Windows\\System32\\shutdown /l");
}