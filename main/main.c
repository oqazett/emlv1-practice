#include <stdio.h>

#include "../ui/console/service/console_service.h"
// #include "../ui/console/service/console_service_call_table.h"


void main_board_controller(void);

int main(void){
    
    main_board_controller();
    return 0;
}

void main_board_controller(void){
    
    while(!check_user_input_close())
    {
        print_welcome_msg();
        print_menu_msg();
        int command = input_user_command(); // 사용자의 입력을 기다림.
        
    }
}