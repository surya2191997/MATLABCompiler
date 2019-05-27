# include "ass5_15CS10044_translator.h"
# include "ass5_15CS10044.tab.h"
# include <string.h>
# include <stdlib.h>
# include <stdio.h>
# include <iostream>
# include <bits/stdc++.h>

using namespace std;

extern vector<string> stringnames;

int instr_num = 0;



void stringmapping()
{
    cout << "\t.section\t.rodata"<<endl;
    int number=0;   
    vector<string>:: iterator it=stringnames.begin();
   
    while(it!=stringnames.end())
    {
        cout << ".LC"<<number<< ":"<<endl; 
        cout << "\t.string "<<*it<<endl;
        number++;
        it++;
    }
}


// print the quad entry accoring to the opcode
void quad_fields::genTargetCode(FILE * out) {

	 printf("\n# ");
     quad_array->quad_Table[instr_num-1].print_quad_fields(instr_num-1);

    switch(op) {

    	

        case(PLUS):
            {
               	symbol_table_fields* result = current->lookup(res);
	 			if(!result) result = global->lookup(res);
     
     			symbol_table_fields * op1 = current->lookup(arg1);
     			if(!op1) op1 = global->lookup(arg1);

      			symbol_table_fields * op2 = current->lookup(arg2);
     			if(!op2) op2 = global->lookup(arg2);

                if(op2) {
                	
                    
                    if(op1->Type->curr_type == MATRIX_) {
                        fprintf(out, "\tleal\t%d(%%rbp), %%eax\n", op1->offset);
                        fprintf(out, "\tmovl\t%d(%%rbp), %%edx\n", op2->offset);
                        fprintf(out, "\taddl\t%%edx, %%eax\n");
                        fprintf(out, "\tmovl\t%%eax, %d(%%rbp)\n", result->offset);
                    } else {
                        if(result->Type->curr_type == CHAR_) {
                            fprintf(out, "\tmovzbl\t%d(%%rbp), %%eax\n", op1->offset);
                            fprintf(out, "\tmovzbl\t%d(%%rbp), %%edx\n", op2->offset);
                            fprintf(out, "\taddl\t%%edx, %%eax\n");
                            fprintf(out, "\tmovb\t%%al, %d(%%rbp)\n", result->offset);
                        } else {
                            fprintf(out, "\tmovl\t%d(%%rbp), %%eax\n", op1->offset);
                            fprintf(out, "\tmovl\t%d(%%rbp), %%edx\n", op2->offset);
                            fprintf(out, "\taddl\t%%edx, %%eax\n");
                            fprintf(out, "\tmovl\t%%eax, %d(%%rbp)\n", result->offset);
                        }
                    }
                    
                } else {
                	
                    if(result->Type->curr_type == CHAR_) {
                        fprintf(out, "\tmovzbl\t%d(%%rbp), %%eax\n", op1->offset);
                        fprintf(out, "\tmovzbl\t%s, %%edx\n", arg2);
                        fprintf(out, "\taddl\t%%edx, %%eax\n");
                        fprintf(out, "\tmovb\t%%al, %d(%%rbp)\n", result->offset);
                    } else {
                        fprintf(out, "\tmovl\t%d(%%rbp), %%eax\n", op1->offset);
                        fprintf(out, "\tmovl\t$%s, %%edx\n", arg2);
                        fprintf(out, "\taddl\t%%edx, %%eax\n");
                        fprintf(out, "\tmovl\t%%eax, %d(%%rbp)\n", result->offset);   
                    }
                }
            }
            break;
        case(MINUS):
            {
                symbol_table_fields* result = current->lookup(res);
	 			if(!result) result = global->lookup(res);
     
     			symbol_table_fields * op1 = current->lookup(arg1);
     			if(!op1) op1 = global->lookup(arg1);

      			symbol_table_fields * op2 = current->lookup(arg2);
     			if(!op2) op2 = global->lookup(arg2);

                if(op2) {
                    
                    if(result->Type->curr_type == CHAR_) {
                        fprintf(out, "\tmovzbl\t%d(%%rbp), %%eax\n", op1->offset);
                        fprintf(out, "\tmovzbl\t%d(%%rbp), %%edx\n", op2->offset);
                        fprintf(out, "\tsubl\t%%edx, %%eax\n");
                        fprintf(out, "\tmovb\t%%al, %d(%%rbp)\n", result->offset);
                    } else {
                        fprintf(out, "\tmovl\t%d(%%rbp), %%eax\n", op1->offset);
                        fprintf(out, "\tmovl\t%d(%%rbp), %%edx\n", op2->offset);
                        fprintf(out, "\tsubl\t%%edx, %%eax\n");
                        fprintf(out, "\tmovl\t%%eax, %d(%%rbp)\n", result->offset);
                    }
                } else {
                    if(result->Type->curr_type == CHAR_) {
                        fprintf(out, "\tmovzbl\t%d(%%rbp), %%eax\n", op1->offset);
                        fprintf(out, "\tmovzbl\t%s, %%edx\n", arg2);
                        fprintf(out, "\tsubl\t%%edx, %%eax\n");
                        fprintf(out, "\tmovb\t%%al, %d(%%rbp)\n", result->offset);
                    } else {
                        fprintf(out, "\tmovl\t%d(%%rbp), %%eax\n", op1->offset);
                        fprintf(out, "\tmovl\t$%s, %%edx\n", arg2);
                        fprintf(out, "\tsubl\t%%edx, %%eax\n");
                        fprintf(out, "\tmovl\t%%eax, %d(%%rbp)\n", result->offset);   
                    }
                }
            }

            break;
        case(INTO):
            {
                symbol_table_fields* result = current->lookup(res);
	 			if(!result) result = global->lookup(res);
     
     			symbol_table_fields * op1 = current->lookup(arg1);
     			if(!op1) op1 = global->lookup(arg1);

      			symbol_table_fields * op2 = current->lookup(arg2);
     			if(!op2) op2 = global->lookup(arg2);

                if(op2) {
                   
                    if(result->Type->curr_type == CHAR_) {
                        fprintf(out, "\tmovzbl\t%d(%%rbp), %%eax\n", op1->offset);
                        fprintf(out, "\tmovzbl\t%d(%%rbp), %%edx\n", op2->offset);
                        fprintf(out, "\timull\t%%edx, %%eax\n");
                        fprintf(out, "\tmovb\t%%al, %d(%%rbp)\n", result->offset);
                    } else {
                        fprintf(out, "\tmovl\t%d(%%rbp), %%eax\n", op1->offset);
                        fprintf(out, "\tmovl\t%d(%%rbp), %%edx\n", op2->offset);
                        fprintf(out, "\timull\t%%edx, %%eax\n");
                        fprintf(out, "\tmovl\t%%eax, %d(%%rbp)\n", result->offset);
                    }
                } else {
                    if(result->Type->curr_type == CHAR_) {
                        fprintf(out, "\tmovzbl\t%d(%%rbp), %%eax\n", op1->offset);
                        fprintf(out, "\tmovzbl\t$%s, %%edx\n", arg2);
                        fprintf(out, "\timull\t%%edx, %%eax\n");
                        fprintf(out, "\tmovb\t%%al, %d(%%rbp)\n", result->offset);
                    } else {
                        fprintf(out, "\tmovl\t%d(%%rbp), %%eax\n", op1->offset);
                        fprintf(out, "\tmovl\t$%s, %%edx\n", arg2);
                        fprintf(out, "\timull\t%%edx, %%eax\n");
                        fprintf(out, "\tmovl\t%%eax, %d(%%rbp)\n", result->offset);
                    }
                }
            }
            break;
        case(DIV):
            {
                symbol_table_fields* result = current->lookup(res);
	 			if(!result) result = global->lookup(res);
     
     			symbol_table_fields * op1 = current->lookup(arg1);
     			if(!op1) op1 = global->lookup(arg1);

      			symbol_table_fields * op2 = current->lookup(arg2);
     			if(!op2) op2 = global->lookup(arg2);

                if(result->Type->curr_type == CHAR_) {
                    fprintf(out, "\tmovzbl\t%d(%%rbp), %%eax\n", op1->offset);
                    fprintf(out, "\tmovzbl\t%d(%%rbp), %%ecx\n", op2->offset);
                    fprintf(out, "\tcltd\n");
                    fprintf(out, "\tidivl\t%%ecx\n");
                    fprintf(out, "\tmovb\t%%al, %d(%%rbp)\n", result->offset);
                } else {
                    fprintf(out, "\tmovl\t%d(%%rbp), %%eax\n", op1->offset);
                    fprintf(out, "\tmovl\t%d(%%rbp), %%ecx\n", op2->offset);
                    fprintf(out, "\tcltd\n");
                    fprintf(out, "\tidivl\t%%ecx\n");
                    fprintf(out, "\tmovl\t%%eax, %d(%%rbp)\n", result->offset);
                }
            }
            break;
        case(PERCENT):
            {
            	symbol_table_fields* result = current->lookup(res);
	 			if(!result) result = global->lookup(res);
     
     			symbol_table_fields * op1 = current->lookup(arg1);
     			if(!op1) op1 = global->lookup(arg1);

      			symbol_table_fields * op2 = current->lookup(arg2);
     			if(!op2) op2 = global->lookup(arg2);

                
                if(result->Type->curr_type == CHAR_) {
                    fprintf(out, "\tmovzbl\t%d(%%rbp), %%eax\n", op1->offset);
                    fprintf(out, "\tmovzbl\t%d(%%rbp), %%ecx\n", op2->offset);
                    fprintf(out, "\tcltd\n");
                    fprintf(out, "\tidivl\t%%ecx\n");
                    fprintf(out, "\tmovl\t%%edx, %%eax\n");
                    fprintf(out, "\tmovb\t%%al, %d(%%rbp)\n", result->offset);
                } else {
                    fprintf(out, "\tmovl\t%d(%%rbp), %%eax\n", op1->offset);
                    fprintf(out, "\tmovl\t%d(%%rbp), %%ecx\n", op2->offset);
                    fprintf(out, "\tcltd\n");
                    fprintf(out, "\tidivl\t%%ecx\n");
                    fprintf(out, "\tmovl\t%%edx, %d(%%rbp)\n", result->offset);
                }
            }
            break;
        case(U_MINUS):
            {
               	symbol_table_fields* result = current->lookup(res);
	 			if(!result) result = global->lookup(res);
     
     			symbol_table_fields * op1 = current->lookup(arg1);
     			if(!op1) op1 = global->lookup(arg1);

      			

                if(result->Type->curr_type == CHAR_) {
                    fprintf(out, "\tmovzbl\t%d(%%rbp), %%eax\n", op1->offset);
                    fprintf(out, "\tnegl\t%%eax\n");
                    fprintf(out, "\tmovb\t%%al, %d(%%rbp)\n", result->offset);
                } else {
                    fprintf(out, "\tmovl\t%d(%%rbp), %%eax\n", op1->offset);
                    fprintf(out, "\tnegl\t%%eax\n");
                    fprintf(out, "\tmovl\t%%eax, %d(%%rbp)\n", result->offset);
                }
            }
            break;
        case(ASSIGN):
            {
            	
            	symbol_table_fields* result = current->lookup(res);
	 			if(!result) result = global->lookup(res);
     	        
     			symbol_table_fields * op1 = current->lookup(arg1);
     			if(!op1) op1 = global->lookup(arg1);


                
                if(op1) {
                	
                   
                    if(result->Type->curr_type == CHAR_) {
                        fprintf(out, "\tmovzbl\t%d(%%rbp), %%eax\n", op1->offset);
                        fprintf(out, "\tmovb\t%%al, %d(%%rbp)\n", result->offset);
                    } else if(op1->Type->curr_type == MATRIX_) {
                        fprintf(out, "\tleal\t%d(%%rbp), %%eax\n", op1->offset);
                        fprintf(out, "\tmovl\t%%eax, %d(%%rbp)\n", result->offset);
                    } else {
                        fprintf(out, "\tmovl\t%d(%%rbp), %%eax\n", op1->offset);
                        fprintf(out, "\tmovl\t%%eax, %d(%%rbp)\n", result->offset);
                    }
                } else {
                	
                    if(result->Type->curr_type == CHAR_) {
                        fprintf(out, "\tmovb\t$%s, %%al\n", arg1);
                        fprintf(out, "\tmovb\t%%al, %d(%%rbp)\n", result->offset);
                    } else {
                        fprintf(out, "\tmovl\t$%s, %%eax\n", arg1);
                        fprintf(out, "\tmovl\t%%eax, %d(%%rbp)\n", result->offset);   
                    } 
                }
            }
            break;

          case(TRA_OP_):
            {
                
            }
            break;
      
        case(LT):
            {
            	symbol_table_fields* result = current->lookup(res);
	 			if(!result) result = global->lookup(res);
     
     			symbol_table_fields * op1 = current->lookup(arg1);
     			if(!op1) op1 = global->lookup(arg1);

      			symbol_table_fields * op2 = current->lookup(arg2);
     			if(!op2) op2 = global->lookup(arg2);

                int idx = atoi(res);
               
                if(op1->Type->curr_type == CHAR_) {
                    fprintf(out, "\tmovzbl\t%d(%%rbp), %%eax\n", op2->offset);
                    fprintf(out, "\tcmpb\t%%al, %d(%%rbp)\n", op1->offset);
                    fprintf(out, "\tjl\t\t.L%d\n", quad_array->quad_Table[idx].labelIdx);
                } else {
                    fprintf(out, "\tmovl\t%d(%%rbp), %%eax\n", op2->offset);
                    fprintf(out, "\tcmpl\t%%eax, %d(%%rbp)\n", op1->offset);
                    fprintf(out, "\tjl\t\t.L%d\n", quad_array->quad_Table[idx].labelIdx);
                }
            }
            break;
        case(LTE):
            {
            	symbol_table_fields* result = current->lookup(res);
	 			if(!result) result = global->lookup(res);
     
     			symbol_table_fields * op1 = current->lookup(arg1);
     			if(!op1) op1 = global->lookup(arg1);

      			symbol_table_fields * op2 = current->lookup(arg2);
     			if(!op2) op2 = global->lookup(arg2);

                int idx = atoi(res);
               
                if(op1->Type->curr_type == CHAR_) {
                    fprintf(out, "\tmovzbl\t%d(%%rbp), %%eax\n", op2->offset);
                    fprintf(out, "\tcmpb\t%%al, %d(%%rbp)\n", op1->offset);
                    fprintf(out, "\tjle\t\t.L%d\n",quad_array->quad_Table[idx].labelIdx);
                } else {
                    fprintf(out, "\tmovl\t%d(%%rbp), %%eax\n", op2->offset);
                    fprintf(out, "\tcmpl\t%%eax, %d(%%rbp)\n", op1->offset);
                    fprintf(out, "\tjle\t\t.L%d\n", quad_array->quad_Table[idx].labelIdx);
                }
            }
            break;
        case(GT):
            {
            	symbol_table_fields* result = current->lookup(res);
	 			if(!result) result = global->lookup(res);
     
     			symbol_table_fields * op1 = current->lookup(arg1);
     			if(!op1) op1 = global->lookup(arg1);

      			symbol_table_fields * op2 = current->lookup(arg2);
     			if(!op2) op2 = global->lookup(arg2);

                int idx = atoi(res);
                
                if(op1->Type->curr_type == CHAR_) {
                    fprintf(out, "\tmovzbl\t%d(%%rbp), %%eax\n", op2->offset);
                    fprintf(out, "\tcmpb\t%%al, %d(%%rbp)\n", op1->offset);
                    fprintf(out, "\tjg\t\t.L%d\n", quad_array->quad_Table[idx].labelIdx);
                } else {
                    fprintf(out, "\tmovl\t%d(%%rbp), %%eax\n", op2->offset);
                    fprintf(out, "\tcmpl\t%%eax, %d(%%rbp)\n", op1->offset);
                    fprintf(out, "\tjg\t\t.L%d\n", quad_array->quad_Table[idx].labelIdx);
                }
            }
            break;
        case(GTE):
            {
            	symbol_table_fields* result = current->lookup(res);
	 			if(!result) result = global->lookup(res);
     
     			symbol_table_fields * op1 = current->lookup(arg1);
     			if(!op1) op1 = global->lookup(arg1);

      			symbol_table_fields * op2 = current->lookup(arg2);
     			if(!op2) op2 = global->lookup(arg2);

                int idx = atoi(res);
               
                if(op1->Type->curr_type == CHAR_) {
                    fprintf(out, "\tmovzbl\t%d(%%rbp), %%eax\n", op2->offset);
                    fprintf(out, "\tcmpb\t%%al, %d(%%rbp)\n", op1->offset);
                    fprintf(out, "\tjge\t\t.L%d\n",quad_array->quad_Table[idx].labelIdx);
                } else {
                    fprintf(out, "\tmovl\t%d(%%rbp), %%eax\n", op2->offset);
                    fprintf(out, "\tcmpl\t%%eax, %d(%%rbp)\n", op1->offset);
                    fprintf(out, "\tjge\t\t.L%d\n",quad_array->quad_Table[idx].labelIdx);
                }
            }
            break;
        case(EQ):
            {
            	symbol_table_fields* result = current->lookup(res);
	 			if(!result) result = global->lookup(res);
     
     			symbol_table_fields * op1 = current->lookup(arg1);
     			if(!op1) op1 = global->lookup(arg1);

      			symbol_table_fields * op2 = current->lookup(arg2);
     			if(!op2) op2 = global->lookup(arg2);

                int idx = atoi(res);
                
                if(op1->Type->curr_type == CHAR_) {
                    fprintf(out, "\tmovzbl\t%d(%%rbp), %%eax\n", op2->offset);
                    fprintf(out, "\tcmpb\t%%al, %d(%%rbp)\n", op1->offset);
                    fprintf(out, "\tje\t\t.L%d\n", quad_array->quad_Table[idx].labelIdx);
                } else {
                    fprintf(out, "\tmovl\t%d(%%rbp), %%eax\n", op2->offset);
                    fprintf(out, "\tcmpl\t%%eax, %d(%%rbp)\n", op1->offset);
                    fprintf(out, "\tje\t\t.L%d\n", quad_array->quad_Table[idx].labelIdx);
                }
            }
            break;
        case(NEQ):
            {
            	symbol_table_fields* result = current->lookup(res);
	 			if(!result) result = global->lookup(res);
     
     			symbol_table_fields * op1 = current->lookup(arg1);
     			if(!op1) op1 = global->lookup(arg1);

      			symbol_table_fields * op2 = current->lookup(arg2);
     			if(!op2) op2 = global->lookup(arg2);

                int idx = atoi(res);
                
                if(op1->Type->curr_type == CHAR_) {
                    fprintf(out, "\tmovzbl\t%d(%%rbp), %%eax\n", op2->offset);
                    fprintf(out, "\tcmpb\t%%al, %d(%%rbp)\n", op1->offset);
                    fprintf(out, "\tjne\t\t.L%d\n", quad_array->quad_Table[idx].labelIdx);
                } else {
                    fprintf(out, "\tmovl\t%d(%%rbp), %%eax\n", op2->offset);
                    fprintf(out, "\tcmpl\t%%eax, %d(%%rbp)\n", op1->offset);
                    fprintf(out, "\tjne\t\t.L%d\n", quad_array->quad_Table[idx].labelIdx);
                }
            }
            break;
       

        case(U_STAR):
            {
                symbol_table_fields* result = current->lookup(res);
	 			if(!result) result = global->lookup(res);
     
     			symbol_table_fields * op1 = current->lookup(arg1);
     			if(!op1) op1 = global->lookup(arg1);


                if(result->Type->curr_type == CHAR_) {
                    fprintf(out, "\tmovl\t%d(%%rbp), %%eax\n", op1->offset);
                    fprintf(out, "\tmovzbl\t(%%eax), %%eax\n");
                    fprintf(out, "\tmovb\t%%al, %d(%%rbp)\n", result->offset);
                } else {
                    fprintf(out, "\tmovl\t%d(%%rbp), %%eax\n", op1->offset);
                    fprintf(out, "\tmovl\t(%%eax), %%eax\n");
                    fprintf(out, "\tmovl\t%%eax, %d(%%rbp)\n", result->offset);
                }
            }
            break;
        case(BRACKET_EQ):
            {
                symbol_table_fields* result = current->lookup(res);
	 			if(!result) result = global->lookup(res);
     
     			symbol_table_fields * op1 = current->lookup(arg1);
     			if(!op1) op1 = global->lookup(arg1);

      			symbol_table_fields * op2 = current->lookup(arg2);
     			if(!op2) op2 = global->lookup(arg2);

		        if(op2)                
		        fprintf(out, "\tmovl\t%d(%%rbp), %%eax\n", op2->offset);
		        else
		        fprintf(out, "\tmovl\t$%s, %%eax\n", arg2);


                if(result)
                fprintf(out, "\tmovl\t%d(%%rbp), %%edx\n", result->offset);
                else
                fprintf(out, "\tmovl\t$%s, %%edx\n", res);

            	
                if(op1->offset < 0) fprintf(out, "\tmovl\t%%edx, %d(%%rbp, %%rax)\n", op1->offset);
                else {
                fprintf(out, "\tmovl\t%d(%%rbp), %%ecx\n", op1->offset);
                fprintf(out, "\tmovl\t%%edx, (%%rcx, %%rax)\n");
                }

            }
            break;
        case(EQ_BRACKET):
            {
            	symbol_table_fields* result = current->lookup(res);
	 			if(!result) result = global->lookup(res);
     
     			symbol_table_fields * op1 = current->lookup(arg1);
     			if(!op1) op1 = global->lookup(arg1);

      			symbol_table_fields * op2 = current->lookup(arg2);
     			if(!op2) op2 = global->lookup(arg2);


                if(op2)                
                fprintf(out, "\tmovl\t%d(%%rbp), %%eax\n", op2->offset);
                else
                fprintf(out, "\tmovl\t$%s, %%eax\n", arg2);



                if(op1->offset < 0) fprintf(out, "\tmovl\t%d(%%rbp, %%rax), %%edx\n", op1->offset);
                else {
                    fprintf(out, "\tmovl\t%d(%%rbp), %%ecx\n", op1->offset);
                    fprintf(out, "\tmovl\t(%%rcx, %%rax), %%edx\n");
                }
                
                if(result)
                fprintf(out, "\tmovl\t%%edx, %d(%%rbp)\n", result->offset);
                else
                fprintf(out, "\tmovl\t%%edx, $%s\n", res);


            }
            break;
        case(U_ADDR):
            {	
            	symbol_table_fields* result = current->lookup(res);
	 			if(!result) result = global->lookup(res);
     
     			symbol_table_fields * op1 = current->lookup(arg1);
     			if(!op1) op1 = global->lookup(arg1);

      		
                
                fprintf(out, "\tleaq\t%d(%%rbp), %%rax\n", op1->offset);
                fprintf(out, "\tmovq\t%%rax, %d(%%rbp)\n", result->offset);
            }
            
            break;
        case(PARAM):
            {
            	
     
     			symbol_table_fields * op1 = current->lookup(arg1);
     			if(!op1) op1 = global->lookup(arg1);

      			
                if(op1) {

                    if(op1->Type->curr_type == CHAR_) {
                        fprintf(out, "\tmovzbl\t%d(%%rbp), %%rax\n", op1->offset);
                        
			fprintf(out, "\tmovq\t%%rax, %%rdi\n");
            fprintf(out, "\tpushq\t%%rax\n");
                    } else if(op1->Type->curr_type == MATRIX_) {
                        fprintf(out, "\tleaq\t%d(%%rbp), %%rax\n", op1->offset);
                        fprintf(out, "\tpushq\t%%rax\n");
                    } else {
                        fprintf(out, "\tmovq\t%d(%%rbp), %%rax\n", op1->offset);
                       
			fprintf(out, "\tmovq\t%%rax, %%rdi\n");
             fprintf(out, "\tpushq\t%%rax\n");
                    }
                } else {
                    fprintf(out, "\tpushq\t$%s\n", arg1);
                }
            }
            break;
        case(GOTO_):
            {
            	symbol_table_fields* result = current->lookup(res);
	 			if(!result) result = global->lookup(res);
     
     			

                int idx = atoi(res);
                fprintf(out, "\tjmp\t\t.L%d\n", quad_array->quad_Table[idx].labelIdx);
            }
            break;

        case(goto_LT):
            {
            	// if a < b goto L

            	symbol_table_fields* result = current->lookup(res);
	 			if(!result) result = global->lookup(res);
     
     			symbol_table_fields * op1 = current->lookup(arg1);
     			if(!op1) op1 = global->lookup(arg1);

      			symbol_table_fields * op2 = current->lookup(arg2);
     			if(!op2) op2 = global->lookup(arg2);

                int idx = atoi(res);

               

        		if(op1)
        		fprintf(out, "\tmovl\t%d(%%rbp), %%eax\n", op1->offset);
        		else
        		fprintf(out, "\tmovl\t$%s, %%eax\n", arg1);

        		if(op2)
        		fprintf(out, "\tcmpl\t%d(%%rbp), %%eax\n", op2->offset);
        		else
        		fprintf(out, "\tcmpl\t$%s, %%eax\n", arg1);
        		fprintf(out, "\tjl\t\t.L%d\n",quad_array->quad_Table[idx].labelIdx);


                

            }
            break;

        case(goto_LTE):
            {
            	symbol_table_fields* result = current->lookup(res);
	 			if(!result) result = global->lookup(res);
     
     			symbol_table_fields * op1 = current->lookup(arg1);
     			if(!op1) op1 = global->lookup(arg1);

      			symbol_table_fields * op2 = current->lookup(arg2);
     			if(!op2) op2 = global->lookup(arg2);

                int idx = atoi(res);
                if(op1)
        		fprintf(out, "\tmovl\t%d(%%rbp), %%eax\n", op1->offset);
        		else
        		fprintf(out, "\tmovl\t$%s, %%eax\n", arg1);

        		if(op2)
        		fprintf(out, "\tcmpl\t%d(%%rbp), %%eax\n", op2->offset);
        		else
        		fprintf(out, "\tcmpl\t$%s, %%eax\n", arg1);
        		fprintf(out, "\tjle\t\t.L%d\n",quad_array->quad_Table[idx].labelIdx);
            }
            break;

        case(goto_GT):
            {
            	symbol_table_fields* result = current->lookup(res);
	 			if(!result) result = global->lookup(res);
     
     			symbol_table_fields * op1 = current->lookup(arg1);
     			if(!op1) op1 = global->lookup(arg1);

      			symbol_table_fields * op2 = current->lookup(arg2);
     			if(!op2) op2 = global->lookup(arg2);

                int idx = atoi(res);

                if(op1)
        		fprintf(out, "\tmovl\t%d(%%rbp), %%eax\n", op1->offset);
        		else
        		fprintf(out, "\tmovl\t$%s, %%eax\n", arg1);

        		if(op2)
        		fprintf(out, "\tcmpl\t%d(%%rbp), %%eax\n", op2->offset);
        		else
        		fprintf(out, "\tcmpl\t$%s, %%eax\n", arg1);
        		fprintf(out, "\tjg\t\t.L%d\n",quad_array->quad_Table[idx].labelIdx);
                



            }
            break;

        case(goto_GTE):
            {
            	symbol_table_fields* result = current->lookup(res);
	 			if(!result) result = global->lookup(res);
     
     			symbol_table_fields * op1 = current->lookup(arg1);
     			if(!op1) op1 = global->lookup(arg1);

      			symbol_table_fields * op2 = current->lookup(arg2);
     			if(!op2) op2 = global->lookup(arg2);

                int idx = atoi(res);
                
                if(op1)
        		fprintf(out, "\tmovl\t%d(%%rbp), %%eax\n", op1->offset);
        		else
        		fprintf(out, "\tmovl\t$%s, %%eax\n", arg1);

        		if(op2)
        		fprintf(out, "\tcmpl\t%d(%%rbp), %%eax\n", op2->offset);
        		else
        		fprintf(out, "\tcmpl\t$%s, %%eax\n", arg1);
        		fprintf(out, "\tjge\t\t.L%d\n",quad_array->quad_Table[idx].labelIdx);


            }
            break;

        case(goto_EQ):
            {
            	symbol_table_fields* result = current->lookup(res);
	 			if(!result) result = global->lookup(res);
     
     			symbol_table_fields * op1 = current->lookup(arg1);
     			if(!op1) op1 = global->lookup(arg1);

      			symbol_table_fields * op2 = current->lookup(arg2);
     			if(!op2) op2 = global->lookup(arg2);

                int idx = atoi(res);
                if(op1)
        		fprintf(out, "\tmovl\t%d(%%rbp), %%eax\n", op1->offset);
        		else
        		fprintf(out, "\tmovl\t$%s, %%eax\n", arg1);

        		if(op2)
        		fprintf(out, "\tcmpl\t%d(%%rbp), %%eax\n", op2->offset);
        		else
        		fprintf(out, "\tcmpl\t$%s, %%eax\n", arg1);
        		fprintf(out, "\tje\t\t.L%d\n",quad_array->quad_Table[idx].labelIdx);
        	}
            break;

        case(goto_NEQ):
            {
            	symbol_table_fields* result = current->lookup(res);
	 			if(!result) result = global->lookup(res);
     
     			symbol_table_fields * op1 = current->lookup(arg1);
     			if(!op1) op1 = global->lookup(arg1);

      			symbol_table_fields * op2 = current->lookup(arg2);
     			if(!op2) op2 = global->lookup(arg2);

                int idx = atoi(res);
                if(op1)
        		fprintf(out, "\tmovl\t%d(%%rbp), %%eax\n", op1->offset);
        		else
        		fprintf(out, "\tmovl\t$%s, %%eax\n", arg1);

        		if(op2)
        		fprintf(out, "\tcmpl\t%d(%%rbp), %%eax\n", op2->offset);
        		else
        		fprintf(out, "\tcmpl\t$%s, %%eax\n", arg1);
        		fprintf(out, "\tjne\t\t.L%d\n",quad_array->quad_Table[idx].labelIdx);
            }
            break;
            

        case(IF_GOTO):
            {
            	symbol_table_fields* result = current->lookup(res);
	 			if(!result) result = global->lookup(res);
     
     			symbol_table_fields * op1 = current->lookup(arg1);
     			if(!op1) op1 = global->lookup(arg1);

                int idx = atoi(res);
                if(op1)
        		fprintf(out, "\tmovl\t%d(%%rbp), %%eax\n", op1->offset);
        		else
        		fprintf(out, "\tmovl\t$%s, %%eax\n", arg1);
        		fprintf(out, "\tcmpl\t$0, %%eax\n");
        		fprintf(out, "\tjne\t\t.L%d\n",quad_array->quad_Table[idx].labelIdx);
            }
            break;

        case(IF_FALSE_GOTO):
            {
            	symbol_table_fields* result = current->lookup(res);
	 			if(!result) result = global->lookup(res);
     
     			symbol_table_fields * op1 = current->lookup(arg1);
     			if(!op1) op1 = global->lookup(arg1);

      		
                int idx = atoi(res);
                if(op1)
        		fprintf(out, "\tmovl\t%d(%%rbp), %%eax\n", op1->offset);
        		else
        		fprintf(out, "\tmovl\t$%s, %%eax\n", arg1);
        		fprintf(out, "\tcmpl\t$0, %%eax\n");
        		fprintf(out, "\tje\t\t.L%d\n",quad_array->quad_Table[idx].labelIdx);
        	}
            break;

        case(call):
            {
            	symbol_table_fields* result = current->lookup(res);
	 			if(!result) result = global->lookup(res);
     
     			symbol_table_fields * op1 = current->lookup(arg1);
     			if(!op1) op1 = global->lookup(arg1);

      			symbol_table_fields * op2 = current->lookup(arg2);
     			if(!op2) op2 = global->lookup(arg2);

                symbol_table_fields * func = global->lookup(arg1);
                
                fprintf(out, "\tcall\t%s\n", arg1);
                fprintf(out, "\taddq\t$%d, %%rsp\n", func->nestedTable->sizeParam);
                if(result->Type->curr_type != VOID_) {
                    if(result->Type->curr_type == CHAR_) {
                        fprintf(out, "\tmovb\t%%al, %d(%%rbp)\n", result->offset);
                    } else if(result->Type->curr_type == MATRIX_ || result->Type->curr_type == PTR) {
                        fprintf(out, "\tleaq\t%%rax, %d(%%rbp)\n", result->offset);
                    } else {
                        fprintf(out, "\tmovq\t%%rax, %d(%%rbp)\n", result->offset);
                    }
                }
            }
            break;
        case(RETURN_):
        	{
        		

            fprintf(out, "\tleave\n");
            fprintf(out, "\tret\n");
        }
            break;
        case(RETURN_EXP):
            {
               
               	
     			symbol_table_fields * op1 = current->lookup(arg1);
     			if(!op1) op1 = global->lookup(arg1);

      		
                if(op1->Type->curr_type == CHAR_) {
                    fprintf(out, "\tmovzbl\t%d(%%rbp), %%rax\n", op1->offset);
                } else {
                    fprintf(out, "\tmovq\t%d(%%rbp), %%rax\n", op1->offset);
                }
                fprintf(out, "\tleave\n");
                fprintf(out, "\tret\n");
            }
            break;
      
        case(Function):
        	{

        		
     
     			symbol_table_fields * op1 = current->lookup(arg1);
     			if(!op1) op1 = global->lookup(arg1);

           	 	current = op1->nestedTable;
        

            fprintf(out, "\t.globl\t%s\n", arg1);
            fprintf(out, "\t.Type\t%s, @function\n", arg1);
            fprintf(out, "%s:\n", arg1);
            fprintf(out, "\tpushq\t%%rbp\n");
            fprintf(out, "\tmovq\t%%rsp, %%rbp\n");
            fprintf(out, "\tsubq\t$%d, %%rsp\n", current->sizeLocal);
        	}
            break;
        case(Function_END):
        	{
            fprintf(out, "\tleave\n");
            fprintf(out, "\tret\n");
            fprintf(out, "\t.size\t%s, .-%s\n", arg1, arg1);
        }
            break;
        default:
            printf("Error ! Unknown opcodeType.\n");
            exit(-1);
    }
}

void adjustOffset(symbolTable* ST)
{
	int offset_local = 0;
	int offset_param = +16;
	
	for(int i = 0; i< ST->curr_length + 1; i++)
	{
		if(ST->table[i].scope[0] == 'p'){
			ST->table[i].offset = offset_param;
			offset_param += ST->table[i].size;
			
		}

		else{

			
			offset_local -= ST->table[i].size;
			ST->table[i].offset = offset_local;
		}
	}

	

	 ST->sizeLocal = ((abs(offset_local) + 15) / 16) * 16;
	 ST->sizeParam = abs(offset_param) - 8;
  

}


vector <bool> mark_all_labels() {
    int labelCounter = 0;
    vector <bool> mark(next_instr, false);
    for(int i = 0; i < next_instr; ++i) {
        quad_instr_types op = quad_array->quad_Table[i].op;
        if( op == goto_LT ||
            op == goto_GT ||
            op == goto_LTE ||
            op == goto_GTE ||
            op == goto_EQ ||
            op == goto_NEQ ||
            op == GOTO_
        ) {
            int idx = atoi(quad_array->quad_Table[i].res);
            mark[idx] = true;
        }
    }

    for(int i = 0; i < next_instr; ++i) {
        if(mark[i]) quad_array->quad_Table[i].labelIdx = labelCounter++;
    }
    return mark;
}




void gen_x86_code(FILE* out)
{

	

	vector<bool> mark = mark_all_labels();


	for(int i = 0; i < next_instr; ++i) {
        if(mark[i]) {
            fprintf(out, ".L%d:\n", quad_array->quad_Table[i].labelIdx);
        }
        instr_num++;
        quad_array->quad_Table[i].genTargetCode(out);
        if( quad_array->quad_Table[i].op == Function_END) {
            for(int j = i + 1; j < next_instr; ++j) {
                if(quad_array->quad_Table[i].op == Function) {
                    current = global->lookup(quad_array->quad_Table[i].arg1)->nestedTable;
                    break;
                }
            }
        }
    }   




}






type_ds *t = 0;
int w;
int flag1 = 0;
int flag2 = 0;
int c = 0;                              
int line_count = 1;
int temp_count = 0;
int next_instr = 0;
int my_var = 0;
char *func_name;
quadArray *quad_array = 0;
symbolTable *global = 0;
symbolTable *current = 0;
symbolTable *temp_use = 0;



int main(){
  int i=0,y, j=0;
  global = create_Symbol_Table();
  current = global;
  quad_array = new quadArray(10000);
  y = yyparse();

  for(int i = 0; i < global->curr_length+1; ++i) {
        if((global->table[i]).nestedTable)
        adjustOffset((global->table[i]).nestedTable);
    }

 /*printf("GLOBAL SYMBOL TABLE : \n");						      // uncomment to print symbol table
  global->print_table();
  while(i<=global->curr_length){
    if((global->table[i]).nestedTable){
        printf("%s Symbol table :  \n",(global->table[i]).name);
        ((global->table[i]).nestedTable)->print_table();
    }
    i++;
  }*/
  current = global;
  //quad_array->print_quadArray();                                                  // uncomment to print quad array
  gen_x86_code(stdout);
 


  return 0;
}

