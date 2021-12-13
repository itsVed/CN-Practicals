#include<iostream>
#include<stdio.h>
#include<conio.h>
using namespace std;

int main()
{
char sender[50];
char receiver[50];
int i,winsize;
 printf("\nEnter the Windows Size : ");
scanf("%d",&winsize);
 printf("\n------Sender Window is Expanded to store Message or Window-------- \n");
 printf("\nEnter the data to Sent: ");
fflush(stdin);
gets(sender);
for(i=0;i<winsize;i++)
receiver[i]=sender[i];

receiver[i]=NULL;
 printf("\nMessage send by sender: ");
 puts(sender);
 printf("\n-------Window size of receiver is expanded---------------------\n");
 printf("\nAcknowledgement from Receiver \n");
for(i=0;i<winsize;i++);
printf("\nACK:%d",i);
 printf("\nMessage received by receiver is : ");
 puts(receiver);
 printf("\n------Window size of receiver is shrinked---------- \n");
 cout<<endl;
}