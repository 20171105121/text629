//
//  main.c
//  text629
//
//  Created by cxm on 18/6/29.
//  Copyright © 2018年 cxm. All rights reserved.
//

#include <stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>//屏幕操作函数
node*creatlink(int n)
{
    int i;
    node*head,*p,*q;
    head=q=p=(node*)malloc(sizeof(node));
    for(i=1;i<n;i++)
    {
        p=(node*)malloc(sizeof(node));
        q->next=p;
        q=p;
        q->next=null;
    }
    return head;
}
void inputdata(node*h)
{
    int i;
    float score;
    node*p=h;
    while(p!=null)
    {
        print("请输入运动员的编号：");
        scanf("%s",p->id);
        print("请输入运动员的名字:");
        scanf("%s",p->name);
        for(i=0;i<9;i++)
        {
            print("请输入第%d位评委的评分:",i+1);
            scanf("%f",&score);
            p->score[i]=score;
        }
        p=p->next;
    }
}

void outputoriginaldata (node*h)
{int i;
    printf("\n************评委打分如下所示************\n");     printf("-----歌手编号-------姓名----评委打分--\n");
        while(h!=NULL){      printf("%10s%14s%",h->id,h->name);   printf("    ");
                for(i=0;i<9;i++)
                  printf("%.0f,",h->score[i]);   printf("\n");   h=h->next;
    }
}
void calculateData(NODE *head) {
        NODE *p=head;     int i;
        float max,min,aver;     while(p!=NULL)     {  max=min=p->score[0];  aver=0;
         for(i=0;i<9;i++)
             if(p->score[i]>max)
                max=p->score[i];
          else if(p->score[i]<min)    min=p->score[i];  for(i=0;i<9;i++)   aver+=p->score[i];   aver-=(max+min);  aver=aver/7;
         p->averScore=aver;  p=p->next;
          18
          
         
        max=p->score[i];
          else if(p->score[i]<min)    min=p->score[i];  for(i=0;i<9;i++)   aver+=p->score[i];   aver-=(max+min);  aver=aver/7;
         p->averScore=aver;  p=p->next;
          }
      
}

void sortData(NODE *head,struct result p[],int n) {
        float temp;  char num[10];     char str[20];     NODE *pp=head;     int i=0,j;
        while(pp!=NULL)     {  strcpy(person[i].id,pp->id);
         strcpy(person[i].name,pp->name);  person[i].score=pp->averScore;  pp=pp->next;
        i++;
            }
     
        for(i=0;i<n-1;i++)      for(j=i+1;j<n;j++)
              if(person[i].score<person[j].score)    {       temp=person[i].score;
                  person[i].score=person[j].score;       person[j].score=temp;
                strcpy(str,p[i].name);
              19
               
            strcpy(num,p[i].id);
                  strcpy(p[i].name,p[j].name);    strcpy(p[i].id,p[j].id);       strcpy(p[j].name,str);    strcpy(p[j].id,num);
            void outputFianlData(struct result p[],int n) {
                    int i;
                    printf("\n*****************选手成绩排名****************\n");     printf("-----名次----选手编号---------姓名-------得分------\n");
                    for(i=0;i<n;i++)  printf("%8d%10s%16s%12.2f\n",i+1,p[i].id,p[i].name,p[i].score);
                void writeFianlData(struct result p[],int n) {
                    int i;   FILE *fp;
                      if ((fp = fopen("singerFianl.dat","w"))==NULL)  {   printf("文件无法打开!\n");   return;
                         }
                      
                     else  {
                        fprintf(fp,"歌手成绩排名情况文档：\n\n"); //向fp所指向的文件中写入数据。
                          fprintf(fp,"********************************************************\n");       for(i=0;i<n;i++)
                             
                             
                             
                             fprintf(fp,"选手排名:%d   选手编号:%s     选手名字:%S     选手得
                                     分:%.2f\n\n",i+1,p[i].id,p[i].name,p[i].score ); 
                                                   fprintf(fp,"********************************************************\n");    
                                      
                                     } 
                                         printf("\n\n**提示**:歌手成绩排名已经保存至 singerFianl.dat 文件。\n\n");  fclose(fp);
            
            
            

