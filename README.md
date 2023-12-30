Overview
This repository contains a simple command-line ATM (Automated Teller Machine) system implemented in C. The program allows users to perform basic banking operations such as checking the account balance, making deposits, and withdrawing funds.

Features
Check Balance:

Displays the current account balance.
Deposit:

Allows users to deposit a specified amount into their account.
Withdraw:

Enables users to withdraw a specified amount from their account, ensuring that the withdrawal amount does not exceed the account balance.
Exit:

Allows users to exit the ATM system.
Getting Started
Prerequisites
Ensure that you have a C compiler installed on your system.
Instructions
Clone the repository to your local machine:

bash
Copy code
git clone <repository_url>
Compile the C program:

bash
Copy code
gcc atm_system.c -o atm_system
Run the program:

bash
Copy code
./atm_system
Follow the on-screen prompts to interact with the ATM system.

Usage
Upon running the program, the user is presented with an ATM menu.

Enter the corresponding number to choose from the following options:

1: Check Balance
2: Deposit
3: Withdraw
4: Exit
Follow the prompts to perform the selected operation.

The program will continue to run until the user chooses to exit by entering '4'.

Sample Usage
markdown
Copy code
---ATM Menu---
1. Check Balance
2. Deposit
3. Withdraw
4. Exit
Enter Your Choice: 1
Account Balance: Rs.1000.00

---ATM Menu---
1. Check Balance
2. Deposit
3. Withdraw
4. Exit
Enter Your Choice: 2
Enter the Amount to Deposit: Rs.500.00
Deposit Successful. New balance: Rs.1500.00

---ATM Menu---
1. Check Balance
2. Deposit
3. Withdraw
4. Exit
Enter Your Choice: 3
Enter the Amount to Withdraw: Rs.200.00
Withdrawal Successful. New balance: Rs.1300.00

---ATM Menu---
1. Check Balance
2. Deposit
3. Withdraw
4. Exit
Enter Your Choice: 4
Exiting ATM. Thank You!
Author
[Your Name]
Contact: [Your Email]
License
This project is licensed under the [License Name] - see the LICENSE file for details.

Acknowledgments
Acknowledge any external libraries, tutorials, or resources used in the project.
Any additional information you want to provide.
