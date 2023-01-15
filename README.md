See SEAT DISTRIBUTION:::::::::::::::::::::::::::::::::  at the end for context
  MAIN MENU:
        1. Create a ticket                
        2.Read/Check a ticket             
       3.See event list                  
        4.SECRET                          
        5.EXIT                            
  (Write 1 or 2 or 3 or 4 or 5):




 Option 1 .Creating a ticket flow: (example of values)  

1            (we chose option 1, to create a ticket)
music        (we choose only between "movie" / "music" / "football" , we throw exceptions otherwise)
Saga         (any string -event name. We can see event name list if we choose from MAIN MENU option 3)
Category2    (Category 2 is premium, se we can only choose row 1 or 2 in the next command)
1            (row 1 chosen)
10           (seat 10 chosen from row 1)

***Display:******************************

#We can see the seats:
Row    Seat taken:
     1 2 3 4 5 6 7 8 9 10 
1    0 0 0 0 0 0 0 0 0 1
   
#We can see the whole list of saved id s that we have in the memory at this time from "ExistingTicketsList.txt":
List of ID's:                             
                                          
1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30 31 32 33 34 35 36 37 38 39 40 41 42 43 44 45 46 47 48 49 50 51 52 53 54 55 56 57 58 59 60 61 62 63

#We can see our current ticket id:
Ticket id to be added: 64
                                         
Data appended successfully

#We can see our current updated id list:
 List of ID's:                             
                                          
1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30 31 32 33 34 35 36 37 38 39 40 41 42 43 44 45 46 47 48 49 50 51 52 53 54 55 56 57 58 59 60 61 62 63 64

#We can see the messages from virtual and pure virtual methods:
Premium ticket or regular, you ll never know (VIRTUAL METH)
Premium ticket or regular, you ll never know (VIRTUAL METH)
Another  message (VIRTUAL METH)
Another  message (VIRTUAL METH)

***Display:******************************

#We will have our ticket SERIALIZED which can be seen choosing option 2 in MAIN MENU





 Option 2 .Reading a ticket flow: (example of values) (we need at least a value in "ExistingTicketsList.txt") 
(only accepting numbers)   

2            (we chose option 2, to check and read a ticket)   
64           (we inserted the id 64, which is a correct id, we can see that it exists and we can choose to see ticket details or not)
y            (we chose that we want to see the ticket details)

***Display:******************************
RECEIVED: 64-                                          
It is a valid ID!-                                          
Show ticket details? (y/n)
y
DESERIZED TICKET:
64
Saga
Category2
music
1
10
***Display:******************************
#We can see the ticket details are correct




 Option 3.See event list flow: 

3            (we chose option 3, to see event list from "EventNames.txt")

***Display:******************************
-                                          
Saga
-                                          
HellFest
-                                          
Tomorrowland
-
***Display:******************************

Saga         (we wrote Saga to see: max seats, Nr. rows, Seats per row, Time, Location)

***Display:******************************
50
5
10
17:00
Bucharest,Romania,Romaero
                                          
***Display:******************************


 Option 4.See SECRET flow: 

4            (we chose option 4, to see SECRET)

 Option 5.See EXIT flow: 

5            (we chose option 5, to EXIT)









SEAT DISTRIBUTION:::::::::::::::::::::::::::::::::

       [   MAIN STAGE   ]
Row\Seat:
  1.  1 2 3 4 5 6 7 8 9 10  Stand1/VIP/Category1 (DEPENDING ON EVENT TYPE)
  2.  1 2 3 4 5 6 7 8 9 10  Stand1/VIP/Category1 
  3.  1 2 3 4 5 6 7 8 9 10  Stand2/Normal/Category2
  4.  1 2 3 4 5 6 7 8 9 10  Stand2/Normal/Category2
  5.  1 2 3 4 5 6 7 8 9 10  Stand2/Normal/Category2 
