# Cryptography

In computer science, cryptography refers to secure information and communication techniques derived from mathematical concepts and a set of rule-based calculations called algorithms, to transform messages in ways that are hard to decipher. Modern cryptography is heavily based on mathematical theory and computer science practice; cryptographic algorithms are designed around computational hardness assumptions, making such algorithms hard to break in actual practice by any adversary. 

### Contents
* [Approach](#approach-followed)  
* [Ciphers Explained](#ciphers)
  * [Caesar cipher](#caesar-cipher)
  * [playfair cipher](#playfair-cipher)
  * [Base64](#base64)
  * [RSA](#rsa)
* [References](#references)

## Approach followed
* The approach and steps followed to get the messages was decribed in the  [Decrypted_message.txt](https://github.com/RAGUL1902/WEC_Cryptography/blob/master/Decrypted_messages.txt)

## Ciphers

### Caesar cipher
In cryptography, a Caesar cipher, also known as Caesar's cipher, the shift cipher, Caesar's code or Caesar shift, is one of the simplest and most widely known encryption techniques. It is a type of substitution cipher in which each letter in the plaintext is replaced by a letter some fixed number of positions down the alphabet. For example, with a left shift of 3, D would be replaced by A, E would become B, and so on. The method is named after Julius Caesar, who used it in his private correspondence.

The encryption step performed by a Caesar cipher is often incorporated as part of more complex schemes, such as the Vigenère cipher, and still has modern application in the ROT13 system. As with all single-alphabet substitution ciphers, the Caesar cipher is easily broken and in modern practice offers essentially no communications security.

### Playfair cipher
The Playfair cipher or Playfair square or Wheatstone–Playfair cipher is a manual symmetric encryption technique and was the first literal digram substitution cipher. The scheme was invented in 1854 by Charles Wheatstone, but bears the name of Lord Playfair for promoting its use.

The technique encrypts pairs of letters (bigrams or digrams), instead of single letters as in the simple substitution cipher and rather more complex Vigenère cipher systems then in use. The Playfair is thus significantly harder to break since the frequency analysis used for simple substitution ciphers does not work with it. The frequency analysis of bigrams is possible, but considerably more difficult. With 600 possible bigrams rather than the 26 possible monograms (single symbols, usually letters in this context), a considerably larger cipher text is required in order to be useful.

### Base64
Base64 is a group of binary-to-text encoding schemes that represent binary data (more specifically, a sequence of 8-bit bytes) in an ASCII string format by translating the data into a radix-64 representation. The term Base64 originates from a specific MIME content transfer encoding. Each non-final Base64 digit represents exactly 6 bits of data. Three bytes (i.e., a total of 24 bits) can therefore be represented by four 6-bit Base64 digits.

Common to all binary-to-text encoding schemes, Base64 is designed to carry data stored in binary formats across channels that only reliably support text content. Base64 is particularly prevalent on the World Wide Web[1] where one of its uses is the ability to embed image files or other binary assets inside textual assets such as HTML and CSS files.

Base64 is also widely used for sending e-mail attachments. This is required because SMTP—in its original form—was designed to transport 7-bit ASCII characters only. This encoding causes an overhead of 33–36% (33% by the encoding itself; up to 3% more by the inserted line breaks).

### RSA
The RSA algorithm is an asymmetric cryptography algorithm; this means that it uses a public key and a private key (i.e two different, mathematically linked keys). As their names suggest, a public key is shared publicly, while a private key is secret and must not be shared with anyone.

The RSA algorithm is named after those who invented it in 1978: Ron Rivest, Adi Shamir, and Leonard Adleman.

## References
* [Wikipedia](https://www.wikipedia.org/)
* [Dcode](https://www.dcode.fr/caesar-cipher)
* [GeeksforGeeks](https://www.geeksforgeeks.org/) 
