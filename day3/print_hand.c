void print_rock_left(){
    printf("   _______\n");
    printf("---'   ____)\n");
    printf("      (_____)\n");
    printf("      (_____)\n");
    printf("      (____)\n");
    printf("---.__(___)\n");

}


void print_sissor_left(){
    printf("    _______\n");
    printf("---'   ____)____\n");
    printf("          ______)\n");
    printf("       __/______)\n");
    printf("      (___)\n");
    printf("---.__(___)\n");

}

void print_paper_left(){
    printf("     _______\n");
    printf("---'    ____)____\n");
    printf("           ______)\n");
    printf("          _______)\n");
    printf("         _______)\n");
    printf("---.__________)\n");

}

void print_lizard_left(){
    printf("Lizzzard\n");
}
void print_lizard_right(){
    printf("Lizzzard\n");
}

void print_spock_left(){
    printf("spock\n");
}
void print_spock_right(){
    printf("spock\n");
}



void print_rock_right(){
    printf("       _______\n");
    printf("      (____   '---\n");
    printf("    (_____)\n");
    printf("     (_____)\n");
    printf("      (____)\n");
    printf("       (___)__.---\n");

}

void print_sissor_right(){
    printf("       _______\n");
    printf("  ____(____  \n");
    printf(" (______\n");
    printf(" (__________\n");
    printf("       (____)\n");
    printf("        (___)__.---\n");

}

void print_paper_right(){
    printf("        _______\n");
    printf("  ____(____    '---\n");
    printf(" (______\n");
    printf("(_______\n");
    printf(" (_______\n");
    printf("    (__________.---\n");
}

void check_your_choice(int input, int index){
    switch (input)
    {
    case 0:
        if(index == 0) print_rock_left();
        else print_rock_right();
        break;
    case 1:
        if(index == 0) print_paper_left();
        else print_paper_right();
        break;
    case 2:
        if(index == 0) print_sissor_left();
        else print_sissor_right();
        break;
    case 3:
        if(index == 0) print_lizard_left();
        else print_lizard_right();
        break;
    case 4:
        if(index == 0) print_spock_left();
        else print_spock_right();
        break;
    default:
        break;
    }

}