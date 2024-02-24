#ifndef BANKFUNCTION_H
#define BANKFUNCTION_H

void login(){
    char name[20];
    int  acc_no;
    printf("Enter Your Name: ");
    scanf(" %s", name);
    printf("\n");
    printf("Enter Your Account No.: ");
    scanf(" %d", &acc_no);
    printf("\n");

    printf("     Welcome %s to Online Banking System\n",name);
    printf("     --------------------------------------        ");
    printf("\n");
 
    printf("      1.Passbook      |      2.UPI\n");
    printf("      3.Loans         |      4.Cheques Status\n");
    printf("      5.Change Pin    |      6.Lodge a Complaint\n");
    printf("\n");

    int n1;
    printf("Request a Service by Pressing the Desired Number: ");
    scanf(" %d", &n1);
    printf("\n");

    if (n1==1){
        printf("     Your Request for Passbook has been Accepted!\n");
        printf("     Please wait while we process your request\n");
        printf("     ########......\n");
    }

    else if (n1==2){
        printf("     Your Request for UPI has been Accepted!\n");
        printf("     Please wait while we process your request\n");
        printf("     ########......\n");
    }

    else if (n1==3){
        printf("     Your Request for Loans has been Accepted!\n");
        printf("     Please wait while we process your request\n");
        printf("     ########......\n");
    }

    else if (n1==4){
        printf("     Your Request for Cheques Status has been Accepted!\n");
        printf("     Please wait while we process your request\n");
        printf("     ########......\n");
    }

    else if (n1==5){
        printf("     Your Request for Change Pin has been Accepted!\n");
        printf("     Please wait while we process your request\n");
        printf("     ########......\n");
    }

    else if (n1==6){
        printf("     Your Request for Lodging Complaint has been Accepted!\n");
        printf("     Please wait while we process your request\n");
        printf("     ########......\n");
    }

    else {
        printf("     Invalid Request!\n");
    }
}

void new_acc(){
    char Name[20];
    printf("Enter Your Name: ");
    scanf(" %s", Name);
    printf("\n");

    char dob[10];
    printf("Enter Your DOB: ");
    scanf(" %s", dob);
    printf("\n");

    char father_name[20];
    printf("Enter Your Father's Name: ");
    scanf(" %s", father_name);
    printf("\n");

    char mother_name[20];
    printf("Enter Your Mother's Name: ");
    scanf(" %s", mother_name);
    printf("\n");

    int aadhar_no;
    printf("Enter Your Aadhar Number: ");
    scanf(" %d", &aadhar_no);
    printf("\n");

    int mobile_no;
    printf("Enter Your Mobile Number: ");
    scanf(" %d", &mobile_no);
    printf("\n");

    int otp;
    printf("         An OTP is sent to your registered mobile number!\n");
    printf("\n");
    printf("                      Enter the OTP: ");
    scanf(" %d", &otp);
    printf("\n");

    printf("              Bank Account Created Succesfully!\n");
    
}

void balance(){
    float n2;
    printf("Enter Account Number: "); 
    scanf(" %f", &n2);
    printf("\n");
    printf("                   Amount = $%.3f !\n",(n2/100000)*4);
}

void aadhar(){
    int n3;
    printf("Enter Account Number: ");
    scanf(" %d", &n3);
    printf("\n");

    int n4;
    printf("Enter Aadhar Number: ");
    scanf(" %d", &n4);
    printf("\n");

    int Otp;
    printf("         An OTP is sent to your registered mobile number!\n");
    printf("\n");
    printf("                    Enter the OTP: ");
    scanf(" %d", &Otp);
    printf("\n");

    printf("                Aadhar Seeding Successful!\n");

}

void help(){
    char NAME[20];
    int  _acc_no;
    printf("Enter Your Name: ");
    scanf(" %s", NAME);
    printf("\n");
    printf("Enter Your Account No.: ");
    scanf(" %d", &_acc_no);
    printf("\n");

    printf("             Welcome %s to Online Grievance Portal\n",NAME);
    printf("             ----------------------------------------        ");
    printf("\n");
    printf("    1.Online Transaction related |      2.UPI Pin related\n");
    printf("    3.Loan Sanction related      |      4.Cheques related\n");
    printf("    5.ATM related                |      6.Card related\n");
    printf("\n");

    int n5;
    printf("Press the Desired Number to file a complaint on Grievance Portal: ");
    scanf(" %d", &n5);
    printf("\n");

    if (n5==1){
        printf("     Your Request for Online Transaction related issue has been Accepted!\n");
        printf("     Please wait while we process your request\n");
        printf("     ########......\n");
        printf("\n");
        printf("                Complaint Registered Successfully!\n");
        printf("                 Complaint ID: 2489133269778\n");
        
    }

    else if (n5==2){
        printf("     Your Request for UPI Pin related issue has been Accepted!\n");
        printf("     Please wait while we process your request\n");
        printf("     ########......\n");
        printf("\n");
        printf("                Complaint Registered Successfully!\n");
        printf("                 Complaint ID: 1311613661331\n");
 
    }

    else if (n5==3){
        printf("     Your Request for Loan Sanction related issue has been Accepted!\n");
        printf("     Please wait while we process your request\n");
        printf("     ########......\n");
        printf("\n");
        printf("                Complaint Registered Successfully!\n");
        printf("                 Complaint ID: 6699239616161\n");
 
    }

    else if (n5==4){
        printf("     Your Request for Cheques related issue has been Accepted!\n");
        printf("     Please wait while we process your request\n");
        printf("     ########......\n");
        printf("\n");
        printf("                Complaint Registered Successfully!\n");
        printf("                 Complaint ID: 7966916161616\n");
 
    }

    else if (n5==5){
        printf("     Your Request for ATM related issue has been Accepted!\n");
        printf("     Please wait while we process your request\n");
        printf("     ########......\n");
        printf("\n");
        printf("                Complaint Registered Successfully!\n");
        printf("                 Complaint ID: 6645454894464\n");
 
    }

    else if (n5==6){
        printf("     Your Request for Card related issue has been Accepted!\n");
        printf("     Please wait while we process your request\n");
        printf("     ########......\n");
        printf("\n");
        printf("                Complaint Registered Successfully!\n");
        printf("                 Complaint ID: 2446400461313\n");
 
    }

    else {
        printf("     Invalid Request!\n");
    }

}

#endif

