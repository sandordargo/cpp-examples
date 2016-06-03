# What is this example about?

It happens frequently that you have to take actions based on the value of a string variable.
Most of the not so experienced devs would start creating immense if-else-if-...-else blocks. And even if there is only one functioncall for each branch, they don't even make a branch a one-liner. It's big and it's hard to maintain.

You can find this in if-else subdirectory.

In polymorphism subdirectory, you can find an example to solve the problem, with inheritance. In this case it means that you have a common base class for a bunch of child classes, which implements the same function in a different way. Instead of an if, you have a pointer to the base class type and you call its overridden function. The child class implementation will be executed. This is nice, this is really OO, but you have to think in advance, or you might have to refactor a lot. So you cannot choose it all the time.

In stdmap subdirectory, an other option is uder. We use std::map and map the strings with function calls. You can always do this. Usually it is more concise then a long if-else. Although for just a few cases, I am not sure if it is worth it. Nevertheless it is more elegant.


