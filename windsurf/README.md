## Creating a project from scratch:
### A Complex Calculator

A scientific calculator that runs in the terminal

### Tab
#### Pros
- After disabling the vim extension, suggestions started working and cascade/chat actually showed up.
- Works really well when working with large/long switch cases.
- Makes good suggestions when the set of possible values of an enum are well known.
- Suggestions during edits/refactors are not major. Programmer stays in control.
- Syntax Errors can be read/referenced by the swe model which can be helpful.

#### Cons
- Suggestions don't work when the vim emulator extension is enabled(see first point in pros). This was extremely frustrating. I really like vim.
- Automatically adding preprocessors doesn't work, not even with suggestions. For example:
    - Added a vector of tokens field that it completed, but I had to add the preprocessor myself.
    - There is a way around this though, you have to navigate to the place where you want the suggestion made. This is better explained in the next point.
    - Suggesting changes after refactoring only works forward, not backwards. For example:
        - I created a method to convert different tokens to strings 
        - The correct suggestions for the code in the method were made but the suggestion to add the method itself to the class definition wasn't.

- Typos can and will happen even when referencing something that already exists.
- Waiting for suggestions is annoying.... This can lead to a bad habit of pausing when typing. Not good for flow state typing.
- Edits are not comprehensive.
- Is it possible to limit/predict/determine the amount of code suggested/recommended?
    - Partial acceptance of suggestions would be interesting 


### Cascade
#### Pros
- Can read terminal output for build errors/failures
- Helps with fixing errors when caught
- Never compiles or runs code without permission. This is nice.
- Code or terminal output can be sent to the chat with just a single click. Why hasn't anyone thought of just embedding some sort of pop up? It would make this a lot better.
- Cascade refactored the simple parser of the calculator to a CMake application in 1:40 seconds with no error. 

#### Cons
- Fixing errors from the simple Calculator caused it to get stuck in a running loop.
- It caught the error from the simple Calculator when refactoring and asked for permission to run it
- Commands and output are executed in the chat window not the actual terminal. This means I have to constantly track back to the chat if I need to take a look at the output. Why didn't they pipe commands directly to the existing terminal session in the app? 
- While the refactor works straight out of the box, I have no need to investigate the code. This is strange, I wonder how I'll feel when I add more pieces of code.
- Fixing bugs is so demotivating when I know I didn't really write the code.



### Overrall
- Being able to select a piece of code and reference it in the chat window is nice.
- Could it be done in a better way??
- The project is half way done but still not functional....