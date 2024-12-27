#include <iostream>
#include <string>
#include "accounts.h"

bool checkDebit(signed int amount) {
  if (amount > 0) {
    return true;
  }
}
bool checkCredit(signed int amount) {
  // If amount is bigger than 0 and is a credit account, it means it's a
  // negative amount hence must be credit. If it's a positive number than debit.
  if (amount < 0) {
    return true;
  }
}

int main() {
  std::std::string accountType;
  signed int amount;
  std::cout << "Enter Account Type: ";
  std::cin >> n;
  std::cout << "Enter Amount: ";
  std::cin >> amount;
  if (accountType == "Assets" || accountType == "Expenses") {
    checkDebit(amount);
  } else if (accountType == "Liabilities" | "Equity" | "Revenue") {
    checkCredit(amount);

    else {
      std::cout << "Invalid account type" << "\n";
    }
  }
}
																	
    	                	            	                             processAccount(accountType);
return 0;
}
// Assets bank 100

// should  return its a debit transaction

// Assets bank -100
// should return its a credit transaction.
