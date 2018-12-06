# Network and Communication

Data communications refers to the transmission of this digital data between two or more computers and a computer network or data network is a telecommunications network that allows computers to exchange data. The physical connection between networked computing devices is established using either cable media or wireless media. The best-known computer network is the Internet.

## Bit Stuffing
Each frame begins and ends with a special bit pattern called a flag byte [01111110]. {Note this is 7E in hex}. Whenever sender data link layer encounters five consecutive ones in the data stream, it automatically stuffs a 0 bit into the outgoing stream.
  <ul>
    <li>
      <p>When the receiver sees five consecutive incoming ones followed by a 0 bit, it automatically destuffs the 0 bit before sending the data to the network layer.</p>
    </li>
    <li>
      <p>Example of bit stuffing –Bit sequence: 110101111101011111101011111110 (without bit stuffing)Bit sequence: 110101111100101111101010111110110 (with bit stuffing) After 5 consecutive 1-bits, a 0-bit is stuffed. Stuffed bits are marked bold.</p>
    </li>
  </ul>
  
## Algorithm for Bit−Stuffing
<ul>
  <li>Start</li>
  <li>Initialize the array for transmitted stream with the special bit pattern 0111 1110 which indicates the beginning of the frame. </li>
  <li>Get the bit stream to be transmitted in to the array. </li>
  <li>Check for five consecutive ones and if they occur, stuff a bit 0 </li>
  <li>Display the data transmitted as it appears on the data line after appending 0111 1110 at the end </li>
  <li>For de−stuffing, copy the transmitted data to another array after detecting the stuffed bits </li>
  <li>Display the received bit stream </li>
  <li>Stop</li>
</ul>
