#include "run_code.h"
#include "linklist_main.h" 

int main() {
    int choice;
    
    while(true){
	cout<<"Enter you choice for run the code in array(1) or linklist(2): ";
    cin>>choice;
       if(choice==1){
	   
        Run_program program1; 
        program1.run(); 
        continue;
    }
       else if(choice==2){
	   
           runnner_list program2; 
           program2.runlist(); }
       else
         cout<<"Invalid choice";
}
   
};

