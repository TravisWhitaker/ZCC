# ZCC
Zero Copy Challenge

# What is the Zero Copy Challenge?
The Zero Copy Challenge is a programming challenge that aims to implement many useful algorithms in C without allocating any memory besides the return value. Creative use of the return value is encouraged - and often needed - while stack variables, dynamic memory allocation, the register keyword, and blindly poking values in random spots is forbidden. 

The solution is ideally sound within its intended limitations. It should be deterministic, and try not to rely on the quirks of its developer's environment. Comments explaining what is going on are preferred. 

These exercises are for fun and learning. To claim a practical advantage over the myriad of already implemented solutions would be naive, though some may have their uses in niche low-memory environments. 

# What are the rules?
- One stack variable, to be returned.
- No heap variables.
- No use of the register keyword; your processor may have more registers than someone else's, and it will typically default to an int anyway.
- Your compilation should have an optimization level of zero (-O0) and all warnings enabled (-Wall).
- C++ is allowed, but more or less any C++ specific types are going to touch memory in ways that is not in the spirit of the challenge, so you are more or less writing C anyway. An std::string is already of too high a complexity to be allowed.
- Including standard libraries is acceptable, but the challenge is better met if nothing is included.
- Temporarily created variables, implied by the language, is acceptable. 
- You may include a test program outside of the challenge's rules - allocating a buffer, using printf, or having variables for control flow are all acceptable for illustrating your algorithm - but please separate it from your algorithm into separate files.

# How should I format my submission?
Your solution should be in a folder, named after your algorithm's top level file. Your solution should have its own header(s) and source file(s), as well as a main.c that utilizes your algorithm. A readme is not necessary, as a large comment block at the top of your header is fine. If a readme is preferred, it's fine too. 
