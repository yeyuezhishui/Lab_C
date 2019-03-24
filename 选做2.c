#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct stu {
    long num;
    char s[10];
    int c1;
    int c2;
    int c3;
    int c4;
    double c5;
    struct stu *next;
    };
void creatlist(struct stu **headp);
void outputlist(struct stu **headp);
void correctlist(struct stu **headp);
void avstu(struct stu **headp);
void sumstu(struct stu **headp);
void sort2(struct stu **headp);
void outputlist2(struct stu **headp);
int main()
{
    struct stu *head=NULL;
    creatlist(&head);
    outputlist(&head);
    correctlist(&head);
    avstu(&head);
    sumstu(&head);
    sort2(&head);
    outputlist2(&head);
    return 0;
}
void creatlist(struct stu **headp)
{
    *headp=(struct stu *)malloc(sizeof(struct stu));
    struct stu *tail=*headp,*p=*headp;
    printf("input the following item devided by square:\n");
    printf("ID\tname\tEnglish grade\tmath grade\tphysics grade\tC language grade");
    printf("end with 0\n");
    for(;;){
        scanf("%ld",&p->num);
        if(p->num==0)break;
        scanf("%s %d %d %d %d",p->s,&p->c1,&p->c2,&p->c3,&p->c4);
        p=(struct stu *)malloc(sizeof(struct stu));
        tail->next=p;
        tail=p; }
    tail->next=NULL;
}
void outputlist(struct stu **headp)
{
    struct stu *p=*headp;
    while(p->next!=NULL) {
        printf("ID %ld NAME %s ENG %d MATH %d PHY %d C %d\n",p->num,p->s,p->c1,p->c2,p->c3,p->c4);
        p=p->next; }
}
void correctlist(struct stu **headp)
{
    char c;
    struct stu *p;
    p=*headp;
    printf("1:look up by name\n");
    printf("2:look up by number\n");
    c=getchar();
    c=getchar();
    switch(c){
        case '1':
            printf("please input the name\n");
            char t[10];
            scanf("%s",t);
            for(;p->next!=NULL&&strcmp(p->s,t);p=p->next)
                ;
            if(!strcmp(p->s,t))
                printf("FIND ID %ld NAME %s ENG %d MATH %d PHY %d C %d\n",p->num,p->s,p->c1,p->c2,p->c3,p->c4);
            else if(p->next==NULL) {
                    printf("NOT FOUND\n");
                    return; }
                    break;
        case '2':
            printf("please input the number\n");
            long tmp;
            scanf("%ld",&tmp);
            for(;p->next!=NULL&&tmp!=p->num;p=p->next) ;
            if(tmp==p->num)
                printf("FIND ID %ld NAME %s ENG %d MATH %d PHY %d C %d\n",p->num,p->s,p->c1,p->c2,p->c3,p->c4);
            else if(p->next==NULL) {
                    printf("NOT FOUND\n");
                    return;}
                    break; }
    printf("which one to change?\n");
    printf("1:number\n");
    printf("2:name\n");
    printf("3:Grade of English\n");
    printf("4:Grade of Math\n");
    printf("5:Grade of Physics\n");
    printf("6:Grade of C Language\n");
    printf("7:I don't want to chage anything\n");
    c=getchar();
    c=getchar();
    printf("please reinput\n");
    switch(c) {
        case '1':scanf("%ld",&p->num);break;
        case '2':scanf("%s",p->s);break;
        case '3':scanf("%d",&p->c1);break;
        case '4':scanf("%d",&p->c2);break;
        case '5':scanf("%d",&p->c3);break;
        case '6':scanf("%d",&p->c4);
        default :return; }
}
void avstu(struct stu **headp)
{
    struct stu *p=*headp;
    for(;p->next!=NULL;p=p->next) {
            double tp;
            tp=(p->c1+p->c2+p->c3+p->c4)/4.0;
            p->c5=tp;
            printf("ID %ld Name %s average %.2lf\n",p->num,p->s,tp); }
}
void sumstu(struct stu **headp)
{
    struct stu *p;
    p=*headp;
    for(;p->next!=NULL;p=p->next)  {
            double tp;
            int sum;
            sum=p->c1+p->c2+p->c3+p->c4;
            tp=sum/4.0;
            printf("ID %ld Name %s sum is %d average is %.2lf\n",p->num,p->s,sum,tp); }
}
void outputlist2(struct stu **headp)
{
	struct stu *p=*headp;
	while(p->next!=NULL)
	{
		printf("average point:\nID%1d NAME%s average point %f\n",p->num,p->s,p->c5);
		p=p->next;
	}
}
void sort2(struct stu **headp)
{
	struct stu*prior1,*prior2,*p1,*p2,*t;
	p1=*headp;
	for(p2=p1->next,prior2=p1;p2!=NULL;prior2=p2,p2=p2->next)
	{
		if(p1->c5>p2->c5&&(*headp)->next!=p2)
		{
			t=p1->next;
			prior2->next=p2->next;
			(*headp)=p2;
			p2->next=t;
			p1=p2;
		}
		else if(p1->c5>p2->c5&&(*headp)->next==p2)
		{
			t=p2;
			p1->next=p2->next;
			p2->next=p1;
			p2=p2->next;
			p1=t;
			*headp=p1;
		}
	}
	for(prior1=*headp,p1=prior1->next;p1->next!=NULL;prior1=p1,p1=p1->next)
	{
		for(p2=p1->next,prior2=p1;p2!=NULL;prior2=p2,p2=p2->next)
		{
			if(p1->c5>p2->c5)
			{
				t=p2->next;
				prior1->next=p2;
				prior2->next=p1;
				p2->next=t;
				p1=p2;
			}
		}
	}
}
