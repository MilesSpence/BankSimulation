# BankSimulation
Project created for class.
## DESCRIPTION
For this assignment, you will write a program that simulates a line at a bank. The bank opens at 9 AM and closes at 5 PM. In between, a number of customers arrive throughout the day. Each customer’s business at the bank takes a different amount of time to complete. The bank is small so it only has one teller for all customers. If one customer is at the teller, and others come in, they wait in line in the order they entered.

Your program will read in an input file with one line for each customer. Each line has three fields: customer name, the time they came in (in 24 hour format), and the number of minutes the customer will need with the teller.  Customers cannot arrive after the bank closes at 5:00 PM (1700), but if a customer is already in line when the bank closes, they will not be turned away. No two customers will arrive at the same time.

Sample File:  <br />
Bob 905 3 <br />
Alice 910 7 <br />
James 912 4 <br />
Marsha 940 2 <br />
Reginald 955 7 <br />
Bertha 1028 13 <br />
Doug 1030 6 <br />
Claudia 1038 11 <br />
Morehouse 1051 10 <br />
Stephen 1104 2 <br />
Melinda 1119 8 <br />
Albert 1132 3 <br />
Edson 1141 10 <br />
Bennet 1150 1 <br />
Susie 1230 7 <br />
Deborah 1259 6 <br />
Earl 1304 7 <br />
Arthur 1306 4 <br />
Curtis 1308 11 <br />
Janie 1341 2 <br />
Kevin 1345 5 <br />
Elsie 1351 3 <br />
Alma 1358 2 <br />
Dennis 1420 11 <br />
Keith 1441 5 <br />
Florence 1527 3 <br />
Rodney 1555 4 <br />
Martin 1605 6 <br />
Scott 1609 4 <br />
Annie 1617 11 <br />
Luis 1624 3 <br />
Sonya 1628 5 <br />
Mike 1634 2 <br />
Iris 1641 4 <br />
Mark 1649 7 <br />
Sherri 1655 3 <br />
Bruce 1659 6 <br />

Your program will simulate the activity of the bank in a given day. It will print out the times customers get in line and the times that they are done with their business. Your program will also print out the average waiting time for all customers (including both the time in line and at the teller). Here is the sample output for the input file above.

Bob got in line at 905. <br />
Bob is done at 908. <br />
Alice got in line at 910. <br />
James got in line at 912. <br />
Alice is done at 917. <br />
James is done at 921. <br />
Marsha got in line at 940. <br />
Marsha is done at 942. <br />
Reginald got in line at 955. <br />
Reginald is done at 1002. <br />
Bertha got in line at 1028. <br />
Doug got in line at 1030. <br />
Claudia got in line at 1038. <br />
Bertha is done at 1041. <br />
Doug is done at 1047. <br />
Morehouse got in line at 1051. <br />
Claudia is done at 1058. <br />
Stephen got in line at 1104. <br />
Morehouse is done at 1108. <br />
Stephen is done at 1110. <br />
Melinda got in line at 1119. <br />
Melinda is done at 1127. <br />
Albert got in line at 1132. <br />
Albert is done at 1135. <br />
Edson got in line at 1141. <br />
Bennet got in line at 1150. <br />
Edson is done at 1151. <br />
Bennet is done at 1152. <br />
Susie got in line at 1230. <br />
Susie is done at 1237. <br />
Deborah got in line at 1259. <br />
Earl got in line at 1304. <br />
Deborah is done at 1305. <br />
Arthur got in line at 1306. <br />
Curtis got in line at 1308. <br />
Earl is done at 1312. <br />
Arthur is done at 1316. <br />
Curtis is done at 1327. <br />
Janie got in line at 1341. <br />
Janie is done at 1343. <br />
Kevin got in line at 1345. <br />
Kevin is done at 1350. <br />
Elsie got in line at 1351. <br />
Elsie is done at 1354. <br />
Alma got in line at 1358. <br />
Alma is done at 1400. <br />
Dennis got in line at 1420. <br />
Dennis is done at 1431. <br />
Keith got in line at 1441. <br />
Keith is done at 1446. <br />
Florence got in line at 1527. <br />
Florence is done at 1530. <br />
Rodney got in line at 1555. <br />
Rodney is done at 1559. <br />
Martin got in line at 1605. <br />
Scott got in line at 1609. <br />
Martin is done at 1611. <br />
Scott is done at 1615. <br />
Annie got in line at 1617. <br />
Luis got in line at 1624. <br />
Sonya got in line at 1628. <br />
Annie is done at 1628. <br />
Luis is done at 1631. <br />
Mike got in line at 1634. <br />
Sonya is done at 1636. <br />
Mike is done at 1638. <br />
Iris got in line at 1641. <br />
Iris is done at 1645. <br />
Mark got in line at 1649. <br />
Sherri got in line at 1655. <br />
Mark is done at 1656. <br />
Bruce got in line at 1659. <br />
Sherri is done at 1659. <br />
Bruce is done at 1705. <br />
Average wait time is 1.72973 minutes.

## Details
    Your program should produce an error message if the user does if the file does not exist.
    You must use a queue to store customers that are waiting in line.
    The queue must be the stl
    You must use functions to processing inputting elements into the queue, processing elements removing from the queue, and reading the file
    You can perform the simulation however you like, but I would recommend having a loop that counts through the minutes of the day, from 9:00 on, and decide what must be done each minute.
## General Requirements
    No global variables other than constants.
    Your source code should be readable and reasonably indented.
    You must provide comments in your code.
