#include<stdio.h>
#define M 2
#define N 2
int main(void)
{
    char courses[M][30] , students[N][20] ;
    float tables[N][M] ;
    int c , s ;
    char * co = &courses[0][0] ;
    char * st = &students[0][0] ;
    float * gr = &tables[0][0] ;
    for( c = 0 ; c < M ; c++ )
    {
        printf( "������� %d �ſγ̵����֣�\n" , c+1 ) ;
        scanf( "%s" , courses[c] ) ;
    }
    for( s = 0 ; s < N ; s++ )
    {
        printf( "������� %d ��ѧ��������\n" , s+1 ) ;
        scanf( "%s" , students[s] ) ;
    }
    for( s = 0 ; s < N ; s++ )
    {
        printf( "����ѧ�� %s ��\n" , students[s] ) ;
        printf( "�������ĳɼ�:\n" ) ;
        for( c = 0 ; c < M ; c++ )
    	{
            printf( "������ %s �ĳɼ��� \n" , courses[c] ) ;
            scanf( "%.2f" , &tables[s][c] ) ;
    	}
    }
    float sum = 0 ;
    for( s = 0 ; s < N ; s++ )
    {
        sum = 0 ;
    	printf( " %s �ĸ��ſγ̵�ƽ���ɼ�Ϊ:\n" , st+s*20 ) ;
    	for( c = 0 ; c < M ; c++ ) 
		    sum += * (gr+s*M+c);
	    printf( "%.2f\n" , sum/M ) ;
    }
    float sum_ = 0 ;
    for( c = 0 ; c < M ; c++ )
    {
        sum_ = 0 ;
    	printf( "���� %s ��ȫ���ƽ���ɼ�Ϊ:\n" , co+c*30 ) ;
    	for( s = 0 ; s < N ; s++ )
		    sum_ += * (gr+s*M+c) ;
	    printf( "%f\n" , sum_/N ) ;
    }
    for( c = 0 ; c < M ; c++ )
    {
        sum_ = 0;
        printf( "���� %s �γ�ƽ���ֵ�����Ϊ��\n" , co+c*30 ) ;
        int cou = 0 ;
        for( s = 0 ; s < N ; s++ ) 
            sum_ += * (gr+s*M+c);
        for( s = 0 ; s < N ; s++ )
        {
            if( *(gr+s*M+c) < sum_/N )cou++ ;}
            printf( "%d\n" , cou ) ;
            cou = 0 ; 
		}
        for( c = 0 ; c < M ; c++ )
        {
            printf( "���� %s �γ̣�ȫ�಻��������Ϊ��\n" , co+c*30 ) ;
            int cou = 0 ;
            for( s = 0 ; s < N ; s++ )
                if( *(gr+s*M+c) < 60 )cou++ ; 
            printf( "%d\n" , cou ) ;
            cou = 0 ; 
		}
        for( c = 0 ; c < M ; c++ )
		{
            printf( "���ڿγ� %s ,ȫ��90��(��90��)���ϵ�����Ϊ:\n",co+c*30);
            int cou = 0 ;
            for( s = 0 ; s < N ; s++ )
                if( *(gr+s*M+c) >= 90 ) cou++ ; 
            printf( "%d\n" , cou ) ;
            cou = 0 ; 
		}
    return 0 ;
}

