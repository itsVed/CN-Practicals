# CN-Practicals

Practical - 1

Sliding Window Protocol is a theoretical concept in which we have simply discussed what size sender window (1+2a) should be in order to improve the efficiency of stop and wait
arq. Now we will discuss practical implementations in which we will consider the size of the receiver window. It is implemented in two protocols in practise:
i) Go Back N (GBN)
ii) Selective Repeat (SR)
 We consider GBN for the practical.

* Sender window size is 4 therefore we require a minimum of 4 sequence numbers to label each packet in the window.
* Now suppose receiver has received all the packets(0, 1, 2 and 3 sent by sender) and hence is now waiting for packet number 0 again (We can not use 4 here as we have only 4 sequence numbers available since N = 4).
* Now suppose the cumulative ack for the above 4 packets is lost in the network.
* On sender side, there will be timeout for packet 0 and hence all the 4 packets will be transmitted again.
* Problem now is receiver is waiting for new set of packets which should have started from 0 but now it will receive the duplicate copies of the previously accepted packets.
* In order to avoid this, we need one extra sequence number.
* Now the receiver could easily reject all the duplicate packets which were starting from 0 because now it will be waiting for packet number 4 (We have added an extra sequence number now).



Practical - 2

Codes for Detecting Errors (Implemented either at Data link layer or Transport Layer of OSI Model)
When a message is sent, it is possible that it will be jumbled by noise or that the data will be distorted. To avoid this, we utilise error-detecting codes, which are extra data appended to a digital message to aid in the detection of any errors that may have happened during transmission.
The usage of redundancy bits, where additional bits are added to enable error detection, is the most basic strategy used for error detection.
