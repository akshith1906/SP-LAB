#include <stdio.h>
#include <stdlib.h>
// char *compressString(char *str, int length)
// {
//     int count = 1;
//     // char cs[2*length];

//     char *cs = (char *)malloc((2 * length) * sizeof(char) + 1);
//     int j = 0; 
//     for (int i = 0; i < (length); i++)
//     {
//         if (str[i] == str[i + 1])
//         {
//             count++;
//         }
//         else
//         {
//             cs[j] = str[i];
//             int digits = 0;
//             int a = count;
//             int k=0;
//             while (a != 0)
//             {
//                 a = a / 10;
//                 digits++;
//             }
// int* uniqueElements(int* arr, int length){
//     int arr2[10000];
   
//     int h=0;
//     for(int i=0;i<length;i++){
//          int l=0 ;
//         for(int j=0;j<=i;j++){
//         if (arr[i]==arr[j]){
//           l++;
//         }
//         }
//       if (l==1){
//         arr2[h]=arr[i];
//         h++;
//       }
//     }
//      int *ue= (int*)malloc(((h+1)*sizeof(int)));
//      for (int l=0;l<=h;l++){
//         ue[l]=arr2[l];
//      }
//      return ue;
// }
// int main()
// {
//     int str[10] = {1, 1, 1, 1, 2 ,4,5 ,6,7,9};
//     int* output = uniqueElements(str, 10);
//     int i = 0;
//     while(output[i]){
//         printf("%d ",output[i]);
//         i++;
//     }
//             k = digits;
//             // sprintf(str,"%d",count);
//             a = count;
//             while (a != 0)
//             {
//                 cs[j + digits] = (a % 10) + '0';
//                 a = a / 10;
//                 digits = digits - 1;
//             }
//             j = j +k+ 1;
//             // cs[j+1]=count + '0';
//             // j+=2;
//             count = 1;
//         }
//     }

//     cs[j++] = str[length];
//     cs[j] = count + '0';

//     // printf("%s\n",cs);
//     return cs;
// }
// int* uniqueElements(int* arr, int length){
    
//     int *ue=(int*)malloc(4);
//     int h=0;
//     for(int i=0;i<length;i++){
//          int l=0 ;
//         for(int j=0;j<=i;j++){
//         if (arr[i]==arr[j]){
//           l++;
//         }
//         }
//        ue= (int*)realloc(ue,(h+1)*sizeof(int));
//       if (l==1){
//         ue[h]=arr[i];
//         h++;
//       }
//     }
//     return ue;
// }
// int uniqueElementsCount(int* arr, int length){
//     int arr[10000]; 
//     int *ue=(int*)malloc(4);
//     int h=0;
//     for(int i=0;i<length;i++){
//          int l=0 ;
//         for(int j=0;j<=i;j++){
//         if (arr[i]==arr[j]){
//           l++;
//         }
//         }
//        ue= (int*)realloc(ue,(h+1)*sizeof(int));
//       if (l==1){
//         ue[h]=arr[i];
//         h++;
//       }
//     }
//     return h;
// }



    //int i=uniqueElementsCount(str,10);
    // for (int j=0;j<i;j++)
    // {
    //     printf("%d ",output[j]);
    // }
     //int size= sizeof(*output)/(sizeof(int));
    //  for(int r=0;r<10;r++){
    //     for(int k=0;k<10;k++){
    //     if (output[k]==str[r]){
    //  printf("%d\n", output[k]);}
    // int n;
    // }
    // while (scanf("%d%*d", &output) != EOF)
    // printf("%d\n", output);
// }
//}
//int** transpose(int** matrix, int NumRow, int NumCol){

//}
// int* uniqueElements(int* arr, int length){
//   int i=0;
// while(i==0);
// }
// Online C compiler to run C program online
char *compressString(char *str, int length)
{
    int count = 1;
    // char cs[2*length];

    char *cs = (char *)malloc((2 * length) * sizeof(char) + 1);
    int j = 0; 
    for (int i = 0; i < (length); i++)
    {
        if (str[i] == str[i + 1])
        {
            count++;
        }
        else
        {
            cs[j] = str[i];
            int digits = 0;
            int a = count;
            int k=0;
            while (a != 0)
            {
                a = a / 10;
                digits++;
            }
            k = digits;
            // sprintf(str,"%d",count);
            a = count;
            while (a != 0)
            {
                cs[j + digits] = (a % 10) + '0';
                a = a / 10;
                digits = digits - 1;
            }
            j = j +k+ 1;
            // cs[j+1]=count + '0';
            // j+=2;
            count = 1;
        }
    }
cs[j++] = str[length];
    cs[j] = count + '0';

    // printf("%s\n",cs);
    return cs;
}
void reverseString(char*str,int length){
   // int k=length-1;
    
    char swap;
    for (int i=0;i<(length/2);i++){
        char swap=str[i];
        str[i]=str[(length-1)-i];
        str[(length-1)-i]=swap;
    }
   // char*k=str[0];
    // return str;
}
int* uniqueElements(int* arr, int length){
    int arr2[10000];
   //printf("hi");
    int h=0;
    for(int i=0;i<length;i++){
         int l=0 ;
        for(int j=0;j<=i;j++){
        if (arr[i]==arr[j]){
          l++;
        }
        }
      if (l==1){
        arr2[h]=arr[i];
        h++;
      //  printf("%d",arr[i]);
      }
    }

     int *ue= (int*)malloc(((h+1)*sizeof(int)));
     for (int l=0;l<=h;l++){
        ue[l]=arr2[l];
       
     }
     //ue[h]=-1;
     return ue;
}
int** transpose(int** matrix, int NumRow, int NumCol){
    
    int**matrix2=NULL;
     matrix2 =(int** )malloc(NumCol*sizeof(int*));
           for(int i=0;i<NumCol;i++){
            matrix2[i]=(int*)malloc(NumRow*sizeof(int));
           }
 
    //int matrix2[NumCol][NumRow];
    for(int l=0;l<NumRow;l++){
        for(int k=0;k<NumCol;k++){
            
           matrix2[k][l]= matrix[l][k];
         
           
        }
    }
    return matrix2;


}




#include<stdio.h>
#include<stdlib.h>
int main(){
    int n;
    char oper[6];
     scanf("%d",&n);
        for(int v=0;v<n;v++){
            scanf("%s",&oper);
        if (oper[4]==49){
            int c;
           // printf("hi");
            scanf("%d",&c);
            char string1[c+1];
            // char* temp[100001];
            // temp=(char*)malloc(100001);
           // for(int x=0;x<c;x++){
                scanf("%s",&string1);
                reverseString(string1,c);
          //for(int w=0;w<c;w++){
            printf("%s\n",string1);
            }    
            //char*output1[c];
          if(oper[4]==50){
            int b;
            scanf("%d",&b);
            char string2[b+1];
            scanf("%s",&string2);
            char*output2;
            output2=compressString(string2, b);
            printf("%s\n",output2);


          }
          if(oper[4]==51){
            int s;
            scanf("%d",&s);
            int arrunique[s];
            for(int x=0;x<s;x++){
               scanf("%d",&arrunique[x]);
            }
            int*unique;
          unique = uniqueElements(arrunique,s);
          int k=0;
          while(unique[k]){
            printf("%d ",unique[k]);
            k++;

          }
          }
          if(oper[4]==52){
            int columns,rows;
            int ** matrix=NULL;
           
            //int matrix[rows][columns];
           
          scanf("%d %d",&rows,&columns);
           matrix =(int** )malloc(rows*sizeof(int*));
           for(int i=0;i<rows;i++){
            matrix[i]=(int*)malloc(columns*sizeof(int));
           }
          for(int h=0;h<rows;h++){
            for(int d=0;d<columns;d++){
           scanf("%d",&matrix[h][d]);
           }
          }
        int** transposed;
        transposed=transpose(matrix,rows,columns);
  
          for(int h=0;h<columns;h++){
            for(int d=0;d<rows;d++){
           printf("%d ",transposed[h][d]);
           }
           printf("\n");
          }
          // free(transposed);
          // free(matrix);
         }
         
        }
    
    }