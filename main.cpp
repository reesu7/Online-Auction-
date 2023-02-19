#include <bits/stdc++.h>

using namespace std;
class AuctionItem{
  private:
      string name;
      string description;
      int startingBid;
      int CurrentBid;
      string winner;
  public:
    AuctionItem(string name,string description,int startingBid){
        this->name = name;
        this->description=description;
        this->startingBid=startingBid;
        this->CurrentBid=startingBid;
        this->winner="";
    }
    void setbid(string bidder,int amount){
        if(amount>CurrentBid){
            CurrentBid=amount;
            winner = bidder;
        }

    }
    string getname(){
       return name;
    }
    string getdescription(){
       return description;
    }
    int startingbid(){
       return startingBid;
    }
    int currentbid(){
        return CurrentBid;

    }
    string getwinner(){
       return winner;
    }
};
class Auction {
public:
    void addItem(AuctionItem item) {
        items.push_back(item);
    }

    void displayItems() {
        for (int i = 0; i < items.size(); i++) {
            cout << "Item " << i+1 << ": " << items[i].getname() << endl;
            cout << "Description: " << items[i].getdescription() << endl;
            cout << "Starting bid: " << items[i].startingbid() << endl;
            cout << "Current bid: " << items[i].currentbid() << endl;
            cout << "Winner: " << items[i].getwinner() << endl;
            cout << endl;
        }
    }

    void makeBid(int itemNum, string bidder, int amount) {
        if (itemNum > 0 && itemNum <= items.size()) {
            items[itemNum-1].setbid(bidder, amount);
        } else {
            cout << "Invalid item number" << endl;
        }
    }

private:
    vector<AuctionItem> items;
};


int main()
{
    Auction auction;
    AuctionItem item1("Laptop", "Dell Inspiron 15", 500);
    AuctionItem item2("Phone", "Samsung Galaxy S21", 700);
    AuctionItem item3("Headphones", "Bose QuietComfort 35 II", 200);
    auction.addItem(item1);
    auction.addItem(item2);
    auction.addItem(item3);
    auction.displayItems();
    auction.makeBid(1, "John", 550);
    auction.makeBid(2, "Alice", 800);
    auction.displayItems();
    return 0;
}
