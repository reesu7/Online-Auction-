                                      # Online-Auction-System
Online Auction System using C++ and OOPs
This is a basic implementation of an online auction system using C++ and Object-Oriented Programming (OOP) principles. The system allows users to create auctions and bid on items, with the highest bidder winning the auction.

Classes:
The system consists of the following classes:
User: Represents a user of the auction system. Contains information such as username, password, and a list of items the user is currently bidding on.
Item: Represents an item up for auction. Contains information such as the item name, description, starting price, and the highest bid so far.
Auction: Represents an auction that contains one or more items. Allows users to place bids on items and keeps track of the highest bid.

Usage:
To use the online auction system, follow these steps:
Create a new User object for each user of the system using the User class constructor.
Create one or more Item objects using the Item class constructor.
Create an Auction object using the Auction class constructor and add the items to the auction using the add_item() method.
Allow users to bid on items using the place_bid() method of the Auction object.
Once the auction is over, use the get_winner() method to determine the highest bidder for each item.
