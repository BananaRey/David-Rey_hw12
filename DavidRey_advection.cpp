#include <iostream>
#include <cstdlib>
#include <stdio.h>    
#include <math.h> 

using namespace std;

double x_en_t0(double x,double y);

int main(){
//se hacen las constantes
 double C=1;
 double T=0.5;
 double Delta_x=0.01;
 double Delta_t=0.001;


 double t=0;
 double intervalo = 4.0;
 int n_x= (intervalo/Delta_x)+1;
 int n_t= 700;

//las cinco contenedoras
double *u_0;
 u_0= new double[n_x];

double *u_1;
 u_1= new double[n_x];

double *u_2;
 u_2= new double[n_x];

double *u_3;
 u_3= new double[n_x];

double *u_4;
 u_4= new double[n_x];
 
 double *u_old;
 u_old= new double[n_x]; 
 
 double *u_new;
 u_new= new double[n_x]; 

//se hace la condicion inicial
 for(int i=0;i<n_x;i++){
 u_old[i]=x_en_t0(i*Delta_x-2,0);
 u_0[i]=x_en_t0(i*Delta_x-2,0);
 
 }
// se evoluciona
 for(int j=1;j<n_t;j++){
  for(int i=1;i<n_x;i++){
   u_new[i]=u_old[i]-((C*Delta_t)/(2*Delta_x))*(u_old[i]-u_old[i-1]); 	
        if(j=140){
	 u_1[i]=u_new[i];	
         }
         if(j=280){
	 u_2[i]=u_new[i];	
         }
         if(j=420){
	 u_3[i]=u_new[i];	
         }
         if(j=560){
	 u_4[i]=u_new[i];	
         }

     }
//se actualiza
    for(int k=0;k<n_x;k++){
     
 u_old[k]=u_new[k]; 
   }
  }
//se imprime
 for(int i=0;i<n_x;i++){ 
cout<<i*Delta_x-2<<" "<<u_0[i]<<" "<<u_1[i]<<" "<<u_2[i]<<" "<<u_3[i]<<" "<<u_4[i]<<" "<<u_new[i]<<endl;

 }
 
return(0);
}
//funcion en t=0
double x_en_t0(double x,double y){
 if((-0.5)<=x and x<=0.5){
  return(0.5);
   }
  else{
   return(0);
   } 
}

