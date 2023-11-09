//Header Files
#include <conio.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

//Colour Declarations
#define COLOR_RED "\x1b[31m"
#define COLOR_GREEN "\x1b[32m"
#define COLOR_BLUE "\x1b[34m"
#define COLOR_YELLOW "\x1b[33m"
#define COLOR_MAGENTA "\x1b[35m"
#define COLOR_CYAN "\x1b[36m"
#define COLOR_RESET "\x1b[0m"

// Data Structure introduced to represent a question
struct Question {
    char question[256];
    char options[4][128];
    int correct_option;
};

//Function Definition to print centered text
void printCenteredText(const char* text) {
    int length = strlen(text);
    int screenWidth = 80;  // Default screen width
    int borderSize = (screenWidth - length) / 2;

    printf(COLOR_GREEN "+");
    for (int i = 0; i < screenWidth - 2; i++) {
        printf(COLOR_YELLOW "*");
    }
    printf(COLOR_GREEN "+\n");

    //printf(COLOR_YELLOW "*");
    for (int i = 0; i < borderSize - 1; i++) {
        printf(" ");
    }
    printf("%s", text);
    for (int i = 0; i < borderSize - 1; i++) {
        printf(" ");
    }
    if (length % 2 == 1) {
        printf(" ");
    }
    printf(COLOR_YELLOW "\n");

    printf(COLOR_GREEN "+");
    for (int i = 0; i < screenWidth - 2; i++) {
        printf(COLOR_YELLOW "*");
    }
    printf(COLOR_GREEN "+\n");
}

//Function definition for Aptitue Test
void quiz() 
{
    printCenteredText("Welcome to My Aptitude Test");
    const char* sector_names[8] = {"IT", "Core", "Consultancy", "E-Commerce", "Finance", "Semiconductors", "Education and Teaching","Data Science and Analysis"};
    printf("\n");
    // Define questions in different sectors
    // Total 40 Questions, 8 Sectors, 5 Questions in each sector
    struct Question questions[40];

    // Intialisation of all Questions in the Aptitude Test, their options and the correct answer. 
    // Sector 1: IT
    strcpy(questions[0].question, "How do you handle remote support?");
    strcpy(questions[0].options[0], "Remote Access and Control");
    strcpy(questions[0].options[1], "Conduct a video call to guide the user");
    strcpy(questions[0].options[2], "Send a user manual with troubleshooting instructions");
    strcpy(questions[0].options[3], "In-person appointment");
    questions[0].correct_option = 0;

    strcpy(questions[1].question, "First computer virus is known as");
    strcpy(questions[1].options[0], "Rabbit");
    strcpy(questions[1].options[1], "Elk cloner");
    strcpy(questions[1].options[2], "SCA virus");
    strcpy(questions[1].options[3], "Creeper program");
    questions[1].correct_option = 3;
    
    strcpy(questions[2].question, "A system analyst designs a new system by");
    strcpy(questions[2].options[0], "Identifying subsystems and interfaces between subsystems");
    strcpy(questions[2].options[1], "Adopting a developed system to the present environment");
    strcpy(questions[2].options[2], "Developing the system as a large, single unit");
    strcpy(questions[2].options[3], "None of these");
    questions[2].correct_option = 0;

    strcpy(questions[3].question, "A channel for communicating across a boundary between two or more subsystem is known as");
    strcpy(questions[3].options[0], " Data path");
    strcpy(questions[3].options[1], "Walk through");
    strcpy(questions[3].options[2], " Act gram");
    strcpy(questions[3].options[3], "Interface");
    questions[3].correct_option = 3;
    
    strcpy(questions[4].question, "In the system concepts, the term organization");
    strcpy(questions[4].options[0], " Data path");
    strcpy(questions[4].options[1], "Walk through");
    strcpy(questions[4].options[2], " Act gram");
    strcpy(questions[4].options[3], "Interface");
    questions[4].correct_option = 3;

    // Sector 2: Core
   strcpy(questions[5].question, " Which of the following steps have to be followed for interfacing a sensor to a microcontroller 8051?");
    strcpy(questions[5].options[0], "interface sensor with ADC and ADC with 8051");
    strcpy(questions[5].options[1], "interface sensor with the MAX232, send now to microcontroller, analyse the results");
    strcpy(questions[5].options[2], "make the appropriate connections with the controller, ADC conversion, analyse the results");
    strcpy(questions[5].options[3], "none of the mentioned");
    questions[5].correct_option = 0;


    strcpy(questions[6].question, "Which of the following architecture is followed by general-purpose microprocessors?");
    strcpy(questions[6].options[0], "Von Neumann architecture");
    strcpy(questions[6].options[1], "Harvard architecture");
    strcpy(questions[6].options[2], "None of the mentioned");
    strcpy(questions[6].options[3], "All of the mentioned");
    questions[6].correct_option = 0;

    strcpy(questions[7].question, "Which of the following microcontroller doesn’t match with its architecture below?");
    strcpy(questions[7].options[0], "ARM7 – Von Neumann");
    strcpy(questions[7].options[1], "Microchip PIC – Harvard");
    strcpy(questions[7].options[2], "ARM9 – Harvard");
    strcpy(questions[7].options[3], "MSP430 – Harvard");
    questions[7].correct_option = 3;

    strcpy(questions[8].question, "In the system concepts, the term organization");
    strcpy(questions[8].options[0], "Refers to the holism of systems");
    strcpy(questions[8].options[1], " Means that parts of the computer system depend on one another");
    strcpy(questions[8].options[2], "Refers to the manner in which each component functions with other components of the system");
    strcpy(questions[8].options[3], "Implies structure and order");
    questions[8].correct_option = 3;
    
    strcpy(questions[9].question, "The 8255 is a ______ chip");
    strcpy(questions[9].options[0], "Digital to analog");
    strcpy(questions[9].options[1], "Input/Output");
    strcpy(questions[9].options[2], "Analog to Digital");
    strcpy(questions[9].options[3], "None of the mentioned");
    questions[9].correct_option = 1;

    // Sector 3: Consultancy
    strcpy(questions[10].question, "A valuer shall refrain from being involved in any action that would bring disrepute to the");
    strcpy(questions[10].options[0], "Business and profession");
    strcpy(questions[10].options[1], "Business");
    strcpy(questions[10].options[2], "Professions");
    strcpy(questions[10].options[3], "Valuation");
    questions[10].correct_option = 2;

    strcpy(questions[11].question, "Which of the following is not included in valuation assignment");
    strcpy(questions[11].options[0], "Review");
    strcpy(questions[11].options[1], "Due diligence");
    strcpy(questions[11].options[2], "Audit.");
    strcpy(questions[11].options[3], "All of the above");
    questions[11].correct_option = 3;

    strcpy(questions[12].question, "Valuer should not encouraged to adopt these policies and procedures:");
    strcpy(questions[12].options[0], "Develop and adopt a code of ethics and make dear that unethical behaviour will notbe tolerated.");
    strcpy(questions[12].options[1], "Check references of potential employees");
    strcpy(questions[12].options[2], "Give employees a list of potential violations and sanctions, including dismissal");
    strcpy(questions[12].options[3], "Engage in any professional conduct involving that reflects adversely on professional reputation, integrity, or competence");
    questions[12].correct_option = 3;

    strcpy(questions[13].question, "When a Valuer uses hypothetical conditions during a valuation or calculation engagement, here she should indicate the ________ for including the hypothetical conditions");
    strcpy(questions[13].options[0], "Purpose");
    strcpy(questions[13].options[1], "Conclusion");
    strcpy(questions[13].options[2], "Justification");
    strcpy(questions[13].options[3], "Reason");
    questions[13].correct_option = 3; 

    strcpy(questions[14].question, "Appropriate procedural safeguards help reduce threats to objectivity and counter any perception of possible bias. Which of the following is not procedural safeguards");
    strcpy(questions[14].options[0], "Providing per-review of valuation, if necessary");
    strcpy(questions[14].options[1], "Act in a manner that is fraudulent");
    strcpy(questions[14].options[2], "Non-Disclosure of any possible source of conflict of interest");
    strcpy(questions[14].options[3], "Non-Disclosures of any prior association with the client");
    questions[14].correct_option = 3;

    // Sector 4: E-Commerce
    strcpy(questions[15].question, "A person sells his used laptop on an E-Commerce website. Through what medium he sealed his laptop?");
    strcpy(questions[15].options[0], "B2B");
    strcpy(questions[15].options[1], "B2C");
    strcpy(questions[15].options[2], "C2C");
    strcpy(questions[15].options[3], "None of this");
    questions[15].correct_option = 2;

    strcpy(questions[16].question, "What is dropshipping?");
    strcpy(questions[16].options[0], "A type of e-commerce where the seller doesn't hold inventory");
    strcpy(questions[16].options[1], "A type of e-commerce where the buyer pays in installments");
    strcpy(questions[16].options[2], "A type of e-commerce where the seller only accepts cryptocurrencies");
    strcpy(questions[16].options[3], "A type of e-commerce where the seller only ships to certain countries");
    questions[16].correct_option = 0;

    strcpy(questions[17].question, "What is a product feed?");
    strcpy(questions[17].options[0], "A list of products and their descriptions that can be used for advertising");
    strcpy(questions[17].options[1], "A list of products that are out of stock");
    strcpy(questions[17].options[2], "A list of products that are only available for a limited time");
    strcpy(questions[17].options[3], "A list of products that are not available for purchase online");
    questions[17].correct_option = 0;

    strcpy(questions[18].question, "What is a sales funnel?");
    strcpy(questions[18].options[0], "A tool used to track sales and revenue");
    strcpy(questions[18].options[1], "A series of steps that a customer takes to make a purchase");
    strcpy(questions[18].options[2], "A type of advertising campaign");
    strcpy(questions[18].options[3], "A type of payment processor");
    questions[18].correct_option = 1;

    strcpy(questions[19].question, "What is retargeting?");
    strcpy(questions[19].options[0], "A type of payment method");
    strcpy(questions[19].options[1], "A type of advertising that targets customers who have already interacted with a brand");
    strcpy(questions[19].options[2], "A type of shipping method");
    strcpy(questions[19].options[3], "A type of customer service technique");
    questions[19].correct_option = 1;
    //Sector 5: Finance
    strcpy(questions[20].question, "Which among the following financial investment is considered to be highly risky and have a growth-oriented venture with the goal of earning a high percentage of return?");
    strcpy(questions[20].options[0], "Merchant banking");
    strcpy(questions[20].options[1], "Leasing");
    strcpy(questions[20].options[2], "Venture capital");
    strcpy(questions[20].options[3], "None of the above");
    questions[20].correct_option = 2;

    strcpy(questions[21].question, "What among the following is required for developing a new product in its initial stages");
    strcpy(questions[21].options[0], "Start-up capital");
    strcpy(questions[21].options[1], "Seed capital");
    strcpy(questions[21].options[2], "Second round financing");
    strcpy(questions[21].options[3], "None of the above");
    questions[21].correct_option = 1;

    strcpy(questions[22].question, "Select one among the following that is not a fee-based financial service.");
    strcpy(questions[22].options[0], "Lease financing");
    strcpy(questions[22].options[1], "Profit management");
    strcpy(questions[22].options[2], "Corporate counselling");
    strcpy(questions[22].options[3], "Issue management");
    questions[22].correct_option = 0;

    strcpy(questions[23].question, "What are the additional finances provided by VCFs to overcome the fledging stage");
    strcpy(questions[23].options[0], "First round financing");
    strcpy(questions[23].options[1], "Second round financing");
    strcpy(questions[23].options[2], "Seed capital");
    strcpy(questions[23].options[3], "None of the above");
    questions[23].correct_option = 1;

    strcpy(questions[24].question, "Which of the following methods considers the entire earnings stream of the venture investment");
    strcpy(questions[24].options[0], "First Chicago method");
    strcpy(questions[24].options[1], "Conventional valuation method");
    strcpy(questions[24].options[2], "Revenue multiplier method");
    strcpy(questions[24].options[3], "None of the above");
    questions[24].correct_option = 0;

    strcpy(questions[25].question, "Amongst which of the following is / are the branch of statistics which deals with the development of statistical methods is classified as ___.");
    strcpy(questions[25].options[0], "Industry statistics");
    strcpy(questions[25].options[1], "Economic statistics");
    strcpy(questions[25].options[2], "Applied statistics");
    strcpy(questions[25].options[3], "None of the mentioned above");
    questions[25].correct_option = 2;

 // Sectors 6: semiconductors
    strcpy(questions[26].question, "_____ switching has used the transfer of coded values from input to output.");
    strcpy(questions[26].options[0], "Combination");
    strcpy(questions[26].options[1], "Time");
    strcpy(questions[26].options[2], " Space ");
    strcpy(questions[26].options[3], " None of these");
    questions[26].correct_option = 2;

    strcpy(questions[27].question, "Which among the following is/are supported by LAN");
    strcpy(questions[27].options[0], " HTTP");
    strcpy(questions[27].options[1], " PABX(");
    strcpy(questions[27].options[2], "SNDP");
    strcpy(questions[27].options[3], " None of these");
    questions[27].correct_option = 1;

    strcpy(questions[28].question, "Select the subset of a network that contains all the routers but has no loops is known as");
    strcpy(questions[28].options[0], "spider tree");
    strcpy(questions[28].options[1], "spider structure");
    strcpy(questions[28].options[2], " spanning-tree");
    strcpy(questions[28].options[3], "Both a and b");
    questions[28].correct_option = 2;

    strcpy(questions[29].question, "The most affordable MODEMs can transmit-");
    strcpy(questions[29].options[0], "300 bits per second");
    strcpy(questions[29].options[1], " 1,200 bits per second");
    strcpy(questions[29].options[2], "2,400 bits per second");
    strcpy(questions[29].options[3], "1600 bits per second");
    questions[29].correct_option = 1;

    strcpy(questions[30].question, "Which of the following commands is used to create a configurational backup");
    strcpy(questions[30].options[0], "Running back & copy");
    strcpy(questions[30].options[1], "Copy running-config startup-config");
    strcpy(questions[30].options[2], "Configurational Mem");
    strcpy(questions[30].options[3], "Wr Mem");
    questions[30].correct_option = 1;

    //Sector 7: education and teaching
    strcpy(questions[31].question, "In which year was the National Education policy announced?");
    strcpy(questions[31].options[0], "2019");
    strcpy(questions[31].options[1], "2020");
    strcpy(questions[31].options[2], "2018");
    strcpy(questions[31].options[3], "NOTA");
    questions[31].correct_option = 1;

    strcpy(questions[32].question, "Evaluation is a _________ process");
    strcpy(questions[32].options[0], "Qualitative");
    strcpy(questions[32].options[1], "Quantitative");
    strcpy(questions[32].options[2], "Both given");
    strcpy(questions[32].options[3], "none of the above");
    questions[32].correct_option = 2;

    strcpy(questions[33].question, "Error of evaluation is");
    strcpy(questions[33].options[0], "Personal error");
    strcpy(questions[33].options[1], "Variable error");
    strcpy(questions[33].options[2], "constant error");
    strcpy(questions[33].options[3], "All of the above");
    questions[33].correct_option = 3;

    strcpy(questions[34].question, "Assessment of learners' achievement helps teacher to");
    strcpy(questions[34].options[0], "Evaluate the effectiveness of the pedadogy");
    strcpy(questions[34].options[1], "Prepare activity log for teaching");
    strcpy(questions[34].options[2], "Maintating the performance record of the learners");
    strcpy(questions[34].options[3], "All of the above");
    questions[34].correct_option = 3;

    strcpy(questions[35].question, "Assesment for learning...");
    strcpy(questions[35].options[0], "foster motivation");
    strcpy(questions[35].options[1], "is done for the purpose of ranking and segregation");
    strcpy(questions[35].options[2], "Emphasises the overall importance of the grades");
    strcpy(questions[35].options[3], "is an exclusive and a peer assesment");
    questions[35].correct_option = 0;

    // Sector 8: Data science and analytics
    strcpy(questions[36].question, "Amongst which of the following is / are the branch of statistics which deals with the development of statistical methods is classified as ___");
    strcpy(questions[36].options[0], "Industry statistics");
    strcpy(questions[36].options[1], "Economic statistics");
    strcpy(questions[36].options[2], "Applied statistics");
    strcpy(questions[36].options[3], "None of the mentioned above");
    questions[36].correct_option = 2;

    strcpy(questions[37].question, "Linear Regression is the supervised machine learning model in which the model finds the best fit between the independent and dependent variable");
    strcpy(questions[37].options[0], "Linear line");
    strcpy(questions[37].options[1], "Nonlinear line");
    strcpy(questions[37].options[2], "Curved line");
    strcpy(questions[37].options[3], "All of the mentioned above");
    questions[37].correct_option = 0;

    strcpy(questions[38].question, "What does the Bayesian network provide");
    strcpy(questions[38].options[0], " Partial description of the domain");
    strcpy(questions[38].options[1], "Complete description of the problem");
    strcpy(questions[38].options[2], "Complete description of the domain");
    strcpy(questions[38].options[3], "None of the mentioned");
    questions[38].correct_option = 2;

    strcpy(questions[39].question, "Amongst which of the following is / are not a major data analysis approach");
    strcpy(questions[39].options[0], "Predictive Intelligence");
    strcpy(questions[39].options[1], "Business Intelligence");
    strcpy(questions[39].options[2], "Text Analytics");
    strcpy(questions[39].options[3], "Data Mining");
    questions[39].correct_option = 0;

    strcpy(questions[35].question, "On which of the following approach A basic line following robot is based?");
    strcpy(questions[35].options[0], "Applied approach");
    strcpy(questions[35].options[1], " Weak approach(");
    strcpy(questions[35].options[2], "Strong approach");
    strcpy(questions[35].options[3], "Cognitive approach");
    questions[35].correct_option = 1;




    int total_marks = 0;
    int sector_marks[8] = {0,0,0,0,0,0,0,0}; //Intialisation of Scores for each Sector (Min Score - 0, Max Score - 5)


    /*Iterates through all the Questions, sector-wise.
    If the answer is Correct, 1 mark is added to the corresponding element in the array, sector_marks.
    Else if answer is incorrect, it ignore and proceeds in the iteration.*/ 
    
    printf("\nSector 1\n");
    for (int i = 0; i < 5; i++) {
        printf(COLOR_CYAN"Question %d: %s\n"COLOR_RESET, i + 1, questions[i].question);
        printf("Options:\n");
        for (int j = 0; j < 4; j++) {
            printf(COLOR_MAGENTA"%d. %s\n"COLOR_RESET, j + 1, questions[i].options[j]);
        }

        int user_answer;
        printf(COLOR_BLUE"Your answer (1-4): "COLOR_RESET);
        scanf("%d", &user_answer);
        user_answer--;

        if (user_answer == questions[i].correct_option) {
            printf(COLOR_GREEN"Correct!\n"COLOR_RESET);
            sector_marks[0] += 1;
            total_marks++;
        } else {
            printf(COLOR_RED"Incorrect. The correct answer is: %s\n"COLOR_RESET, questions[i].options[questions[i].correct_option]);
        }
    }

    printf("\nSector 2\n");
    for (int i = 5; i < 10; i++) {
        printf(COLOR_CYAN"Question %d: %s\n"COLOR_RESET, i + 1, questions[i].question);
        printf("Options:\n");
        for (int j = 0; j < 4; j++) {
            printf(COLOR_MAGENTA"%d. %s\n"COLOR_RESET, j + 1, questions[i].options[j]);
        }

        int user_answer;
        printf(COLOR_BLUE"Your answer (1-4): "COLOR_RESET);
        scanf("%d", &user_answer);
        user_answer--;

        if (user_answer == questions[i].correct_option) {
            printf(COLOR_GREEN"Correct!\n"COLOR_RESET);
            sector_marks[1] += 1;
            total_marks++;
        } else {
            printf(COLOR_RED"Incorrect. The correct answer is: %s\n"COLOR_RESET, questions[i].options[questions[i].correct_option]);
        }
    }

    printf("\nSector 3\n");
    for (int i = 10; i < 15; i++) {
        printf(COLOR_CYAN"Question %d: %s\n"COLOR_RESET, i + 1, questions[i].question);
        printf("Options:\n");
        for (int j = 0; j < 4; j++) {
            printf(COLOR_MAGENTA"%d. %s\n"COLOR_RESET, j + 1, questions[i].options[j]);
        }

        int user_answer;
        printf(COLOR_BLUE"Your answer (1-4): "COLOR_RESET);
        scanf("%d", &user_answer);
        user_answer--;

        if (user_answer == questions[i].correct_option) {
            printf(COLOR_GREEN"Correct!\n"COLOR_RESET);
            sector_marks[2] += 1;
            total_marks++;
        } else {
            printf(COLOR_RED"Incorrect. The correct answer is: %s\n"COLOR_RESET, questions[i].options[questions[i].correct_option]);
        }
    }

    printf("\nSector 4\n");
    for (int i = 15; i < 20; i++) {
        printf(COLOR_CYAN"Question %d: %s\n"COLOR_RESET, i + 1, questions[i].question);
        printf("Options:\n");
        for (int j = 0; j < 4; j++) {
            printf(COLOR_MAGENTA"%d. %s\n"COLOR_RESET, j + 1, questions[i].options[j]);
        }

        int user_answer;
        printf(COLOR_BLUE"Your answer (1-4): "COLOR_RESET);
        scanf("%d", &user_answer);
        user_answer--;

        if (user_answer == questions[i].correct_option) {
            printf(COLOR_GREEN"Correct!\n"COLOR_RESET);
            sector_marks[3] += 1;
            total_marks++;
        } else {
            printf(COLOR_RED"Incorrect. The correct answer is: %s\n"COLOR_RESET, questions[i].options[questions[i].correct_option]);
        }
    }

    printf("\nSector 5\n");
    for (int i = 20; i < 25; i++) {
        printf(COLOR_CYAN"Question %d: %s\n"COLOR_RESET, i + 1, questions[i].question);
        printf("Options:\n");
        for (int j = 0; j < 4; j++) {
            printf(COLOR_MAGENTA"%d. %s\n"COLOR_RESET, j + 1, questions[i].options[j]);
        }

        int user_answer;
        printf(COLOR_BLUE"Your answer (1-4): "COLOR_RESET);
        scanf("%d", &user_answer);
        user_answer--;

        if (user_answer == questions[i].correct_option) {
            printf(COLOR_GREEN"Correct!\n"COLOR_RESET);
            sector_marks[4] += 1;
            total_marks++;
        } else {
            printf(COLOR_RED"Incorrect. The correct answer is: %s\n"COLOR_RESET, questions[i].options[questions[i].correct_option]);
        }
    }

    printf("\nSector 6\n");
    for (int i = 25; i < 30; i++) {
        printf(COLOR_CYAN"Question %d: %s\n"COLOR_RESET, i + 1, questions[i].question);
        printf("Options:\n");
        for (int j = 0; j < 4; j++) {
            printf(COLOR_MAGENTA"%d. %s\n"COLOR_RESET, j + 1, questions[i].options[j]);
        }

        int user_answer;
        printf(COLOR_BLUE"Your answer (1-4): "COLOR_RESET);
        scanf("%d", &user_answer);
        user_answer--;

        if (user_answer == questions[i].correct_option) {
            printf(COLOR_GREEN"Correct!\n"COLOR_RESET);
            sector_marks[5] += 1;
            total_marks++;
        } else {
            printf(COLOR_RED"Incorrect. The correct answer is: %s\n"COLOR_RESET, questions[i].options[questions[i].correct_option]);
        }
    }

    printf("\nSector 7\n");
    for (int i = 30; i < 35; i++) {
        printf(COLOR_CYAN"Question %d: %s\n"COLOR_RESET, i + 1, questions[i].question);
        printf("Options:\n");
        for (int j = 0; j < 4; j++) {
            printf(COLOR_MAGENTA"%d. %s\n"COLOR_RESET, j + 1, questions[i].options[j]);
        }

        int user_answer;
        printf(COLOR_BLUE"Your answer (1-4): "COLOR_RESET);
        scanf("%d", &user_answer);
        user_answer--;

        if (user_answer == questions[i].correct_option) {
            printf(COLOR_GREEN"Correct!\n"COLOR_RESET);
            sector_marks[6] += 1;
            total_marks++;
        } else {
            printf(COLOR_RED"Incorrect. The correct answer is: %s\n"COLOR_RESET, questions[i].options[questions[i].correct_option]);
        }
    }
	
    printf("\nSector 8\n");
    for (int i = 35; i < 40; i++) {
        printf(COLOR_CYAN"Question %d: %s\n"COLOR_RESET, i + 1, questions[i].question);
        printf("Options:\n");
        for (int j = 0; j < 4; j++) {
            printf(COLOR_MAGENTA"%d. %s\n"COLOR_RESET, j + 1, questions[i].options[j]);
        }

        int user_answer;
        printf(COLOR_BLUE"Your answer (1-4): "COLOR_RESET);
        scanf("%d", &user_answer);
        user_answer--;

        if (user_answer == questions[i].correct_option) {
            printf(COLOR_GREEN"Correct!\n"COLOR_RESET);
            sector_marks[7] += 1;
            total_marks++;
        } else {
            printf(COLOR_RED"Incorrect. The correct answer is: %s\n"COLOR_RESET, questions[i].options[questions[i].correct_option]);
        }
    }

    // Print marks scored by the user sector-wise
    for (int i = 0; i < 8; i++) {
        printf(COLOR_MAGENTA"%s Sector %d: Marks Scored: %d\n"COLOR_RESET, sector_names[i],i + 1, sector_marks[i]);
    }
	
    printf(COLOR_YELLOW"Total Marks: %d / 40 \n"COLOR_RESET, total_marks); //prints Total marks, which out of 40
    printf("\n");
    
    printCenteredText("Program Completed");

}

// Function definition for displaying Logo
void logo() {

    const char* color_reset = "\x1b[0m";
    const char* color_p = "\x1b[33m"; 
    const char* color_a = "\x1b[34m"; 

    printf("\n"); // Top margin
    printf("+-------+/\\+-------+\n");

    // Print "P"
    printf("|%s   * * *          | %s\n", color_p, color_reset);
    printf("|%s   *    *         |%s\n", color_p, color_reset);
    printf("|%s   * * *          |%s\n", color_p, color_reset);
    printf("|%s   *              |%s\n", color_p, color_reset);
    printf("|%s   *              |%s\n", color_p, color_reset);
    printf("|%s   *              |%s\n", color_p, color_reset);
    printf("|%s   *      lacement| \n%s", color_p, color_reset);
    printf("+-------+--+-------+\n");

    printf("|%s    *             |%s\n", color_a, color_reset);
    printf("|%s  *   *           |%s\n", color_a, color_reset);
    printf("|%s *     *          |%s\n", color_a, color_reset);
    printf("|%s *****  *         |%s\n", color_a, color_reset);
    printf("|%s *      *         |%s\n", color_a, color_reset);
    printf("|%s *      *         |%s\n", color_a, color_reset);
    printf("|%s *      *ssistant |%s\n", color_a, color_reset);
    printf("+-------+\\/+-------+\n");


    printf("\n"); 

}

//Defintion of function to find No. of columns in the CSV file containing Placement Data. 
int numberofelements_column(int num,const char *d,const char *e)
{
    FILE* fp = fopen("datafinal1.csv", "r"); //Opening File Header and declaring File Pointer

    const char *t[172][2];
    int count=0; 	
    if (!fp)
        printf(COLOR_RED"Can't open file\n");
    else {
        char buffer[1024];
        int row = 0;
        int column = 0;
        while (fgets(buffer,
                     1024, fp)) {
            column = 0;
            row++;
 
            if (row == 1)
                continue;

            char* value = strtok(buffer, ",");
            while (value)
             {
                int condition1,condition2;
                if (column <2)
                {
                    condition1=0;
                }

                if(column<4)
                {
                    condition2=0;
                }
                if (column == 2) 
                    {if (strcmp(value, d) == 0)
                    {
                        condition1=1;
                    }}
                if (column == 4)
                    {if (strcmp(value, e) == 0)
                    {
                        condition2=1;
                    }}
                if(condition1==1 && condition2==1)
                {
                    if(num==7)
                    {
                        if(column == num)
                    {
                        char *token = strtok(value,"_");
                        while(token)
                        {
                            count++;
                            token = strtok(NULL, "_");
                            }
                    }
                        
                    }
                    else
                    {
                        if(column == num)
                    {
                        count++;
                    }}
                }
                value = strtok(NULL, ",");
                column++;                              
            }

        
    }fclose(fp);
    }
    return count;}

//
int frequency_find(int a,const char *g)
{
    int m=0;
    char buffer[1024];
    FILE *fp;
    fp=fopen("datafinal1.csv","r");
    if (!fp)
        printf(COLOR_RED"Can't open file\n"); 
    else 
    {
        char buffer[1024];
        int row = 0;
        int column = 0;
        while (fgets(buffer,
                     1024, fp)) 
        {
            column = 0;
            row++;
            if (row == 1)
                continue;
            char* token = strtok(buffer, ","); 
            while (token) 
            {
                const char *b;
                b=token;
                if (column == a)
                {
                    if(strcmp(b,g)==0)
                    m++;
                }
                token = strtok(NULL, ",");
                column++;
            } 
        } 
        fclose(fp);
    }
    return m;
}


void graph(int a)
{
    FILE *gnuplotPipe = popen("gnuplot", "w");
    if(a==1)
    {/*cgvctc*/
        if(gnuplotPipe != NULL)
        {
            fprintf(gnuplotPipe, "load 'lg1.gnu'\n");
            pclose(gnuplotPipe);
            
        }
        system("start lineplot1.png");
    }
    if(a==2)
    {/*movctc*/
        if(gnuplotPipe != NULL)
        {
            fprintf(gnuplotPipe, "load 'lg2.gnu'\n");
            pclose(gnuplotPipe);
            
        }
        system("start lineplot2.png");
    }
    if(a==3)
    {/*movcg*/
        if(gnuplotPipe != NULL)
        {
            fprintf(gnuplotPipe, "load 'lg3.gnu'\n");
            pclose(gnuplotPipe);
            
        }
        system("start lineplot3.png"); 
    }
}
void histogram(int b)
{
    if(b==1)
    {
        FILE *gnuplotPipe = popen("gnuplot", "w");
        if(gnuplotPipe != NULL)
        {
            fprintf(gnuplotPipe, "load 'jobs.gnu'\n");
            pclose(gnuplotPipe); 
        }
    system("start histjobs.png");
    }
    if(b==2)
    {
        FILE *gnuplotPipe = popen("gnuplot", "w");
        if(gnuplotPipe != NULL)
        {
            fprintf(gnuplotPipe, "load 'sectors.gnu'\n");
            pclose(gnuplotPipe); 
        }
        if(b<0 || b>2)
        {
            printf("\nThe second graph does not exist");
        }
    system("start histsectors.png");
    }
}
int freq_find(int size,const char *a[size][2],const char *g,const char *h)
{
    int rows = size;
    int n = 0,m=0;
    int count_flutter=0,count_jds=0,count_datasci_inno=0,count_ade=0,count_teach=0,count_datasci_amway=0;
    int count_se_indegene=0,count_se_innoplexes=0,count_adesign=0,count_bat=0,count_mt=0,count_datasci_know=0;
    int count_analyst=0,count_BIM=0,count_struct=0,count_product=0,count_design_marquee=0,count_faculty=0,count_pm=0,count_ase=0,count_SDE=0,count_stud=0,count_design_silicon=0;

    for (int i = 0; i < rows; i++) {
    if (strcmp(a[i][0], "Rutkashi_Technologies_Pvt._Ltd.") == 0 && strcmp(a[i][1], "Flutter_Developer") == 0) {
        count_flutter++;
        if (count_flutter == 1) {
            n++;
        }
        if (strcmp(g, "Rutkashi_Technologies_Pvt._Ltd.") == 0 && strcmp(h, "Flutter_Developer") == 0) {
                m = count_flutter;
            }
    }
    if (strcmp(a[i][0], "Equbot_AI_India_Pvt._Ltd.") == 0 && strcmp(a[i][1], "Junior_Data_Scientist") == 0) {
        count_jds++;
        if (count_jds == 1) {
            n++;
        }
        if (strcmp(g, "Equbot_AI_India_Pvt._Ltd.") == 0 && strcmp(h, "Junior_Data_Scientist") == 0) {
                m = count_jds;
            }
    }
    if (strcmp(a[i][0], "Innoplexes") == 0 && strcmp(a[i][1], "Associate_Data_Engineer") == 0) {
        count_ade++;
        if (count_ade == 1) {
            n++;
        }
        if (strcmp(g, "Innoplexes") == 0 && strcmp(h, "Associate_Data_Engineer") == 0) {
                m = count_ade;
            }
    }
    if (strcmp(a[i][0], "Career_Launcher") == 0 && strcmp(a[i][1], "Teaching") == 0) {
        count_teach++;
        if (count_teach == 1) {
            n++;
        }
        if (strcmp(g, "Career_Launcher") == 0 && strcmp(h, "Teaching") == 0) {
                m = count_teach;
            }
    }
    if (strcmp(a[i][0], "Amway_Global_Services") == 0 && strcmp(a[i][1], "Data_Scientist") == 0) {
        count_datasci_amway++;
        if (count_datasci_amway == 1) {
            n++;
        }
        if (strcmp(g, "Amway_Global_Services") == 0 && strcmp(h, "Data_Scientist") == 0) {
                m = count_datasci_amway;
            }
    }
    if (strcmp(a[i][0], "Indegene") == 0 && strcmp(a[i][1], "Software_Engineer") == 0) {
        count_se_indegene++;
        if (count_se_indegene == 1) {
            n++;
        }
        if (strcmp(g, "Indegene") == 0 && strcmp(h, "Software_Engineer") == 0) {
                m = count_se_indegene;
            }
    }
    if (strcmp(a[i][0], "Innoplexes") == 0 && strcmp(a[i][1], "Software_Engineer") == 0) {
        count_se_innoplexes++;
        if (count_se_innoplexes == 1) {
            n++;
        }
        if (strcmp(g, "Innoplexes") == 0 && strcmp(h, "Software_Engineer") == 0) {
                m = count_se_innoplexes;
            }
    }
    if (strcmp(a[i][0], "Silicon_Labs") == 0 && strcmp(a[i][1], "Associate_Design_Engineer") == 0) {
        count_adesign++;
        if (count_adesign == 1) {
            n++;
        }
        if (strcmp(g, "Silicon_Labs") == 0 && strcmp(h, "Associate_Design_Engineer") == 0) {
                m = count_adesign;
            }
    }
    if (strcmp(a[i][0], "In2IT") == 0 && strcmp(a[i][1], "Business_Analyst_Trainee") == 0) {
        count_bat++;
        if (count_bat == 1) {
            n++;
        }
        if (strcmp(g, "In2IT") == 0 && strcmp(h, "Business_Analyst_Trainee") == 0) {
                m = count_bat;
            }
    }
    if (strcmp(a[i][0], "BSCPL") == 0 && strcmp(a[i][1], "Management_Trainee") == 0) {
        count_mt++;
        if (count_mt == 1) {
            n++;
        }
        if (strcmp(g, "BSCPL") == 0 && strcmp(h, "Management_Trainee") == 0) {
                m = count_mt;
            }
    }
    if (strcmp(a[i][0], "Knowdis") == 0 && strcmp(a[i][1], "Data_Scientist") == 0) {
        count_datasci_know++;
        if (count_datasci_know == 1) {
            n++;
        }
        if (strcmp(g, "Knowdis") == 0 && strcmp(h, "Data_Scientist") == 0) {
                m = count_datasci_know;
            }
    }
    if (strcmp(a[i][0], "Deolitte") == 0 && strcmp(a[i][1], "Analyst") == 0) {
        count_analyst++;
        if (count_analyst == 1) {
            n++;
        }
        if (strcmp(g, "Deolitte") == 0 && strcmp(h, "Analyst") == 0) {
                m = count_analyst;
            }
    }
    if (strcmp(a[i][0], "J&F") == 0 && strcmp(a[i][1], "BIM_Engineer/Detailer") == 0) {
        count_BIM++;
        if (count_BIM == 1) {
            n++;
        }
        if (strcmp(g, "J&F") == 0 && strcmp(h, "BIM_Engineer/Detailer") == 0) {
                m = count_BIM;
            }
    }
    if (strcmp(a[i][0], "J&F") == 0 && strcmp(a[i][1], "Structural_Engineer") == 0) {
        count_struct++;
        if (count_struct == 1) {
            n++;
        }
        if (strcmp(g, "J&F") == 0 && strcmp(h, "Structural_Engineer") == 0) {
                m = count_struct;
            }
    }
    if (strcmp(a[i][0], "MojoCare") == 0 && strcmp(a[i][1], "Product/Business_Analyst") == 0) {
        count_product++;
        if (count_product == 1) {
            n++;
        }
        if (strcmp(g, "MojoCare") == 0 && strcmp(h, "Product/Business_Analyst") == 0) {
                m = count_product;
            }
    }
    if (strcmp(a[i][0], "Marquee_Semiconductors") == 0 && strcmp(a[i][1], "Designer/Verification_Engineer") == 0) {
        count_design_marquee++;
        if (count_design_marquee == 1) {
            n++;
        }
        if (strcmp(g, "Marquee_Semiconductors") == 0 && strcmp(h, "Designer/Verification_Engineer") == 0) {
                m = count_design_marquee;
            }
    }
    if (strcmp(a[i][0], "DRIEMS") == 0 && strcmp(a[i][1], "Faculty-Electronics_and_Telecommunication") == 0) {
        count_faculty++;
        if (count_faculty == 1) {
            n++;
        }
        if (strcmp(g, "DRIEMS") == 0 && strcmp(h, "Faculty-Electronics_and_Telecommunication") == 0) {
                m = count_faculty;
            }
    }
    if (strcmp(a[i][0], "MojoCare") == 0 && strcmp(a[i][1], "Product_Manager") == 0) {
        count_product++;
        if (count_product == 1) {
            n++;
        }
        if (strcmp(g, "MojoCare") == 0 && strcmp(h, "Product_Manager") == 0) {
                m = count_product;
            }
    }
    if (strcmp(a[i][0], "PhableCare") == 0 && strcmp(a[i][1], "Associate_Software_Engineer") == 0) {
        count_ase++;
        if (count_ase == 1) {
            n++;
        }
        if (strcmp(g, "MojoCare") == 0 && strcmp(h, "Product_Manager") == 0) {
                m = count_product;
            }
    }
    if (strcmp(a[i][0], "MojoCare") == 0 && strcmp(a[i][1], "SDE_(Software_Development)") == 0) {
        count_SDE++;
        if (count_SDE == 1) {
            n++;
        }
        if (strcmp(g, "MojoCare") == 0 && strcmp(h, "SDE_(Software_Development)") == 0) {
                m = count_SDE;
            }
    }
    if (strcmp(a[i][0], "Byjus") == 0 && strcmp(a[i][1], "Student_Specialist") == 0) {
        count_stud++;
        if (count_stud == 1) {
            n++;
        }
        if (strcmp(g, "Byjus") == 0 && strcmp(h, "Student_Specialist") == 0) {
                m = count_stud;
            }
    }
    if (strcmp(a[i][0], "Silicon_Lab") == 0 && strcmp(a[i][1], "Designer/Verification_Engineer") == 0) {
        count_design_silicon++;
        if (count_design_silicon == 1) {
            n++;
        }
        if (strcmp(g, "Silicon_Lab") == 0 && strcmp(h, "Designer/Verification_Engineer") == 0) {
                m = count_design_silicon;
            }
    }
}
    return m;
}

// PROBABILITY CASE II
// float hard_probability (int n,const char *skills[n],const char *branch,int mon,float cg,const char *d,const char *e)
// {
    // FILE* fp = fopen("datafinal.csv", "r");
 	// int k = 0; 
    // const char *t[172][2];
//     int n=0;
//     char buffer[1024];
//     FILE *fp;
//     fp=fopen("datafinal.csv","r");
//     int row=0,column=0; 
//     if (!fp)
//         printf(COLOR_RED"Can't open file\n"); 
//     else 
//     {
//         char buffer[1024];
//         int row = 0;
//         int column = 0;
//         while (fgets(buffer,
//                      1024, fp)) 
//         {
//             column = 0;
//             row++;
//             if (row == 1)
//                 continue;
//             char* token = strtok(buffer, ",");
//             int temp=0, temp1=0; 
//             while (token) 
//             {
//                 if(temp==1 && temp1==1)
//                 {
//                     temp =0;
//                     temp1=0;
//                 }
//                 if (column == 2)
//                 {
//                     if(strcmp(token,a)==0)
//                     {
//                         temp = 1;                    
//                     }                 
//                 }
//                 if(column == 4)
//                 {
//                     if(strcmp(token,b)==0)
//                     {
//                         temp1 = 1;                        
//                     }
//                 }
//                 token = strtok(NULL, ",");
//                 column++;
//                 if(temp1 ==1 && temp ==1)
//                 {
//                     n++;
//                 }
//             } 
//         } 
//         fclose(fp);
//     }
//     float prob;
//     prob = (float)freq/(float)n;
//     return prob*100;
//     if (!fp)
    //     printf(COLOR_RED"Can't open file\n");
    // else {
    //     // Here we have taken size of
    //     // array 1024 you can modify it
    //     char buffer[1024];
    //     int row = 0;
    //     int column = 0;
    //     while (fgets(buffer,
    //                  1024, fp)) {
    //         column = 0;
    //         row++; 
    //         // To avoid printing of column
    //         // names in file can be changed
    //         // according to need
    //         if (row == 1)
    //             continue 
    //         // Splitting the data
    //         char* value = strtok(buffer, ",");
 	// 		char cmp[50],job[50];
 	// 		int m1 = 0, m2 = 0 , m3 = 0, m4 = 0;
    //         while (value)
    //          {
    //             if (column == 2) 
    //             	strcpy(cmp,value);
    //             if (column == 4)
    //             	strcpy(job,value);              	
    //             if (column == 5)
    //             {
    //             		float num = 0;	
	// 					num += (int) value[0] - 48;
	// 					num += ((int) value[2] - 48)*0.1;
	// 					if (num >= cg - 0.5 && num <= cg+0.5);	
	// 						m1 = 1;
    //             }              
    //             if (column == 6)
    //             {
    //             	if (!strcmp(branch,value))
    //             	{               	
    //             		m2 = 1;
    //             	}         
    //             }               
    //             if (column == 7)
    //             {
    //             	if (!strcmp(skills,value) ||  !strcmp("NA",value) )
    //             	{               	
    //             		m3 = 1;
    //             	}             
    //             }               
    //             if (column == 10)
    //             {
    //             		int num = 0;	
	// 					num += (int) value[0] - 48;
	// 					if (num >= mon - 2 && num <= mon+2)
	// 						m4 = 1;
    //             }               
    //            if (m1 && m2 && m3 && m4)
    //            {
    //            	t[k][0] = cmp;
    //             t[k][1] = job;
    //             k++; 
    //            }
    //            value = strtok(NULL, ", ");
    //            column++;
    //         }
    //     }
    //     // Close the file
    //     fclose(fp);
    // }
    // int size = k;
    // const char *a[size][2];
    // for(int i = 0; i < size; i++)
    // {
    //     printf("%s,%s\n",t[i][0],t[i][1]);      
    // }
    // for (int i = 0; i < size; i++)
    // {
    //     a[i][0] = t[i][0];
    //     a[i][1] = t[i][1];
    // }
    // int q = freq_find(size,a,"MojoCare","SDE_(Software_Development)");
    // float final;
    // final = probability("MojoCare","SDE_(Software_Development)",q);
    // printf("\nThe probability is %f %%",final);
    // printf("\n%d",size);
// }

float probability_final(int n,const char *skills[n],const char *branch,int mon,float cg,const char *d,const char *e)

{
    FILE* fp = fopen("datafinal1.csv", "r");

    const char *t[172][2];
    float p_cgpa,p_branch,p_skills,p_months;
 	
    if (!fp)
        printf(COLOR_RED"Can't open file\n"COLOR_RESET);
 
    else {
        char buffer[1024];
        int row = 0;
        int column = 0;
        int c_cgpa=0,c_branch=0,c_skills=0,c_months=0;
        while (fgets(buffer,
                     1024, fp)) {
            column = 0;
            row++;
 
            if (row == 1)
                continue;

            char* value = strtok(buffer, ",");
 			int m1 = 0, m2 = 0 , m3 = 0, m4 = 0;
            while (value)
             {
                int condition1,condition2;
                if (column <2)
                {
                    condition1=0;
                }

                if(column<4)
                {
                    condition2=0;
                }
                if (column == 2) 
                    if (strcmp(value, d) == 0)
                    {
                        condition1=1;
                    }
                if (column == 4)
                    if (strcmp(value, e) == 0)
                    {
                        condition2=1;
                    }
                if(condition1==1 && condition2==1)
                {
                    if (column == 5)
                {
                		float num = 0;	
						num += (int) value[0] - 48;
						num += ((int) value[2] - 48)*0.1;
						if (num >= cg - 0.5 && num <= cg+0.5);	
							c_cgpa++;
                }
                
                if (column == 6)
                {
                	if (!strcmp(branch,value))
                	{               	
                		c_branch++;
                	}         
                }
                
                if (column == 7)
                {
                    char *token = strtok(value,"_");
                    while(token)
                    {
                        for(int i=0;i<n;i++)
                    {
                        if(strcmp(skills[i],token)==0)
                        {
                            c_skills++;
                        }
                    }
                    token = strtok(NULL, "_");
                    }
                	
             
                }
                
                if (column == 10)
                {
                		int num = 0;
						num += (int) value[0] - 48;
                        printf(COLOR_GREEN"%d"COLOR_RESET,num);
						if ((num >= mon - 2 && num <= mon+2)|| num>=mon)
							c_months++;
                }
                }
                
               value = strtok(NULL, ",");
               column++;
            }
            
        if(row==142)
            {
                p_branch=(float)c_branch/(float)numberofelements_column(6,d,e);
                p_cgpa=(float)c_cgpa/(float)numberofelements_column(5,d,e);
                p_months=(float)c_months/numberofelements_column(10,d,e);
                p_skills=(float)c_skills/(float)numberofelements_column(7,d,e);
                break;
            }}
        fclose(fp);
    }
    float absp_branch,absp_cgpa,absp_skills,absp_months;
    absp_branch = (float)1/(float)6;
    absp_cgpa = 0.11;//because there are 11 numbers in given range//
    absp_months=0.208;//because there are 5 months +-2 from given number of months(max is 24)// 
    absp_skills=0.399;
    float final_prob = p_branch*absp_branch+p_cgpa*absp_cgpa+p_months*absp_months+p_skills*absp_skills;
    if (numberofelements_column(6,d,e)==0||numberofelements_column(5,d,e)==0||numberofelements_column(10,d,e)==0||numberofelements_column(7,d,e)==0)
    {
        return 0;
    }
    else
        return final_prob;

}

void grapher()
{
    int n, m;
    printCenteredText(COLOR_YELLOW"Welcome to my Graphs"COLOR_RESET);
    printf(COLOR_CYAN"Welcome, which graph do you want? \n 1.CGPA v/s CTC\n 2.Months of Internship v/s CTC\n 3.Months of Internship v/s CGPA\n Enter: "COLOR_RESET);
    scanf("%d", &n);

    printf(COLOR_CYAN"Welcome, which Bar Plot do you want? \n 1.Jobs\n 2.Sectors\n Enter: "COLOR_RESET);
    scanf("%d", &m);
    graph(n);
    histogram(m);
}

void predictor(float cg,const char *branch,int n,const char *skills[n],int mon)
{
 	// An example of input would be....
    // float cg = 8.5;
 	// const char *branch = "EE";
 	// const char *skills[5] = {"Python","C++","Communication-Skills","Software-in-Data-Analysis","Java"} ;
 	// int mon = 6;
const char* unique_pairs[20][3] = {
    {"Rutkashi_Technologies_Pvt._Ltd.", "Flutter_Developer", "IT"},
    {"Equbot_AI_India_Pvt._Ltd.", "Junior_Data_Scientist", "Finance/IT"},
    {"Innoplexes", "Associate_Data_Engineer", "Data_Sci"},
    {"Career_Launcher", "Teaching", "Education"},
    {"Amway_Global_Services", "Data_Scientist", "IT"},
    {"Indegene", "Software_Engineer", "IT"},
    {"Silicon_Labs", "Associate_Design_Engineer", "Semiconductors"},
    {"In2IT", "Business_Analyst_Trainee", "Consulting/IT"},
    {"BSCPL", "Management_Trainee", "Core"},
    {"Knowdis", "Data_Scientist", "Data_Sci"},
    {"Deolitte", "Analyst", "IT"},
    {"J&F", "BIM_Engineer/Detailer", "Core"},
    {"J&F", "Structural_Engineer", "Core"},
    {"MojoCare", "Product/Business_Analyst", "Data_Sci"},
    {"Marquee_Semiconductors", "Designer/Verification_Engineer", "Semiconductors"},
    {"DRIEMS", "Faculty-Electronics_and_Telecommunication", "Teaching"},
    {"MojoCare", "Product_Manager", "Business"},
    {"PhableCare", "Associate_Software_Engineer", "IT"},
    {"MojoCare", "SDE_(Software_Development)", "IT"},
    {"Byjus", "Student_Specialist", "Education"},
};

const char *data[] = {
        "R-FlutterDev",
        "E-JrDataSci",
        "Inn-AssctDE",
        "CL-Teaching",
        "Amway-DS",
        "Ind-SWEng",
        "S-AssctDesEng",
        "In2-BAnlystT",
        "BSCPL-MgmentT",
        "K-DataSci",
        "D-Anlyst",
        "J&F-BIM",
        "J&F-StrEng",
        "MC-P/BAnlyst",
        "MD/VerEng",
        "DRIEMS-FacyE&T",
        "MC-PrdctMng",
        "PC-AssctSWEng",
        "MC-SDE(SWDev)",
        "B-StdSpclst"
    };


float out[20];
for(int i=0;i<20;i++)
{
    float x;
    x=probability_final(n,skills,branch,mon,cg,unique_pairs[i][0],unique_pairs[i][1])*100;
    out[i] = x;
    printf(COLOR_MAGENTA"%s,%s  %f\n"COLOR_RESET,unique_pairs[i][0],unique_pairs[i][1],x);
}

FILE *fp;
fp = fopen("probhisto.txt", "w"); // Open the file for writing (create if not exists)

if (fp == NULL) {
    printf("Can't Open\n");
}

    
printf("\n");
for (int i = 0; i < 20; i++) {
    fprintf(fp, "%s\t", data[i]);
    fprintf(fp, "%f\n", out[i]);
}

fclose(fp); // Close the file

printf(COLOR_BLUE"Data has been written to the file probhisto.txt successfully.\n"COLOR_RESET);
FILE *gnuplotPipe = popen("gnuplot", "w");
if(gnuplotPipe != NULL)
{
    fprintf(gnuplotPipe, "load 'probhisto.gnu'\n");
    pclose(gnuplotPipe); 
}
system("start histcompanies.png");

}


//Main Function
void main()
{
    logo();
    int j=1;
    while(j==1)
    {
    printCenteredText(COLOR_YELLOW"Hi, I am PAss, your placement guide at IIT Bhubaneswar."COLOR_RESET);
    printf("\n\nFor Aptitude Test press 1\nFor Grapher press 2\nFor Placement prediction press 3\n\n");
    int i=1,num,mon;
    char branch_input[3];
    float cg;
    char choice[1];
    char option[1024];
    while(1)
    {
        printf("Your Choice: ");
        scanf("%s", &option);
        if(((int)option[0]-48)>=1 && ((int)option[0]-48)<=3)
            break;     
    }
    int option1 = (int)option[0] - 48;
    while(i == 1)
        {
            switch(option1)
    {
        case 1:
        i=1;
        while(i == 1)
        {
            quiz();
             while(1){            
            printf(COLOR_BLUE"\nDo you wish to retry?\n\nYour Choice(No-n): "COLOR_RESET);
            scanf("%s",&choice);
            if(strcmp(choice,"n")==0)
            {
                i=0;
            }
            if(strcmp(choice,"n")==0 ||strcmp(choice,"y")==0)
                break;
            }
        }
        break;     
        case 2:
        i=1;
        while(i == 1)
        {
            grapher();
            while(1){
                printf(COLOR_MAGENTA"\nDo you wish to continue graphing?\n\nYour Choice(Yes-y,No-n): "COLOR_RESET);
                scanf("%s",&choice);
                if(strcmp(choice,"n")==0 ||strcmp(choice,"y")==0)
                    break;
            }
            if(strcmp(choice,"n")==0)
            {
                i=0;
            }
        }
        break;
        case 3:
        i=1;
        while(i == 1)
        {
        printf(COLOR_MAGENTA"Welcome to Placement Predictor."COLOR_RESET);
        while(1){
            char temp[1024];
            printf(COLOR_MAGENTA"\nPlease Enter your CGPA(in float with one decimal):"COLOR_RESET);
            scanf("%s",&temp);
            cg = 0;
            if(isdigit(temp[0])>0 && isdigit(temp[2])>0)	
		    {cg += (int) temp[0] - 48;
		     cg += ((int) temp[2] - 48)*0.1;
             if(cg>=1 && cg<=10)
                break;
            }
            
        default:
        i=0;
        }
        printf(COLOR_MAGENTA"\nPlease Enter you Branch(EE,ECE,CSE,ME,MME,CE): "COLOR_RESET);
        scanf("%s",&branch_input);
        while(1){
            char temp[1024];
            printf(COLOR_MAGENTA"\nPlease Enter the number of skills you posess "COLOR_RESET);
            printf(COLOR_MAGENTA"from amongst: [Flask, Business-Intelligence ,Tensorflow, C, Communication-Skills, AutoCAD, Revi, TEKLA, SCIA-Enginee, STAAD-Pro, Python, Java, HTML, JavaScript, CSS, Software-in-Data-Analysis, Xilinx, Cadence, Synopsys, C++]: "COLOR_RESET);
            scanf("%s",&temp);
            num =0;
            if(isdigit(temp[0])>0 && isdigit(temp[1])==0 )	
		    {num += (int) temp[0] - 48;
            break;
            }
            if(isdigit(temp[0])>0 && isdigit(temp[1])>0)	
		    {num += ((int) temp[0] - 48)*10;
            num += (int)temp[1]-48;
            break;
            }}

        const char *branch = branch_input;
        const char *skills[num];
        for(int i=0;i<num;i++)
        {
            char temp[1024];
            printf(COLOR_CYAN"\nEnter the Skills[%d]: "COLOR_RESET,i);
            scanf("%s",temp);
            skills[i]=strdup(temp);
        }
        for (int i = 0; i < num; i++) 
        {
        printf(COLOR_CYAN"Skills[%d]: %s\n"COLOR_RESET, i, skills[i]);
        }
        while(1){
            char temp[1024];
             printf(COLOR_CYAN"\nPlease Enter the number of months of Internship(Max value accepted is 24): "COLOR_RESET);
            scanf("%s",&temp);
            mon =0;
            if(isdigit(temp[0])>0)	
		    {mon += (int) temp[0] - 48;
            break;
            }}
        predictor(cg,branch,num,skills,mon);
        // writer(out);
        while(1){
            printf(COLOR_CYAN"\nDo you wish to continue predicting?\n\nYour Choice(Yes-y,No-n): "COLOR_RESET);
            scanf("%s",&choice);
            if(strcmp(choice,"n")==0 ||strcmp(choice,"y")==0)
                break;
        }
            if(strcmp(choice,"n")==0)
            {
                i=0;
            }
        }
    }
    }   while(1){
            printf(COLOR_CYAN"\nExit??\n\nYour Choice(Yes-y,No-n): "COLOR_RESET);
            scanf("%s",&choice);
            if(strcmp(choice,"n")==0 ||strcmp(choice,"y")==0 )
                break;
    }
            if(strcmp(choice,"y")==0)
            {
                j=0;
            }
        }
   
}
