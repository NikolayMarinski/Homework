#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
cout<<"Hello to my game!"<<endl<<endl;
cout<<"People start talking that in the laboratory, scientists are working on time travelling machine. You're really curious and want to see is it true. You spend months studying the plans of the laboratory and the schedules of the workers and finally you're done. You wait till the right day comes and make your move."<<endl;
cout<<"When the sun goes down you sneak in through: "<<endl;
cout<<"    (1)                 (2)     "<<endl;
cout<<" The vents        The back door"<<endl;
int vents = 1;
int backdoor = 2;
int choice;
cin>>choice;

if(choice == vents)
{
cout<<"You entered the vents!"<<endl;
cout<<"You continue and sneak to the room with the portal with no problem. But suddenly you hear cracking sound and when you look down you see that the part of the vent under you is starting to break."<<endl;
cout<<"You don't have enough time to react so the vent breaks and you fall in the room. Alarm turns on and red lights start flashing you know that you're in big trouble. Now you have only two ways: "<<endl;
cout<<"Either you turn on the machine and travel to random time or you surrender to the security."<<endl;
cout<<"       (1)                     (2)"<<endl;
cout<<"Turn on the machine         Surrender"<<endl;
int machine = 1;
int surrender = 2;
int choice;
cin>>choice;
if(choice == machine)
{
cout<<"You turned on the machine and jumped in the portal!"<<endl;
cout<<"You look around you and don't see any signs of the portal or the laboratory. Actually you don see any signs of the human race!"<<endl;
cout<<"Around you are only trees and bushes."<<endl;
cout<<"You start walking around and it doesn't take you that long before you hear bird sounds. You start walking towards them but suddenly you hear heavy steps and feel the ground shaking."<<endl;
cout<<"You look around worried and then realize what time you're in. YOU'RE BACK AT THE DINOSAUR TIME! And for your first lucky thing today the big thing that is stomping around is a Brontosaur."<<endl;
cout<<"You start walking around because the sun is nearly down and you have to find shelter."<<endl;
cout<<"After a very long walk through the forest you finally found a cave. Now the question is: Do you want to go inside or keep looking for a safe place to make shelter from trees and leaves!"<<endl;
cout<<"              (1)                                      (2)"<<endl;
cout<<"           Go inside                 Make shelter from trees and leaves"<<endl;
int inside = 1;
int shelter = 2;
int choice2;
cin>>choice2;
if(choice2 == inside)
{
cout<<"The cave is really dark but you still go in. Of course there is something inside. It won't be that easy. But you got really lucky and the Raptor is sleeping. Now you have really important question in you head!"<<endl;
cout<<"You see a nest and if you're careful enough you can take one egg without waking up the mother."<<endl;
cout<<"          (1)                                                 (2)                          "<<endl;
cout<<"   Take the egg and go out         Go out with nothing and find other place to sleep through the night  "<<endl;
int egg = 1;
int shelter2 = 2;
int choice3;
cin>>choice3;
if(egg == choice3)
{
cout<<"So you are brave enough to go to that dinosaur nest and take one of the eggs? Ok then. You go to the nest really carefully and get one of the eggs. Now you have to go out of the cave and find safe place for the night."<<endl;
cout<<"LOL, You're insane but you really did it."<<endl;
cout<<"Now you just go ahead and keep searching for different place to sleep through the night."<<endl;
cout<<"You finally find two trees that are close enough and have really thick branches so you collect sticks and leaves and you go you on the tree to rest through the night!"<<endl;
cout<<"You sleep through the night without any problems but in the morning you're really hungry."<<endl;
cout<<"You can eat the egg if you want but you also can save it and maybe even hatch it."<<endl;
cout<<"    (1)                       (2)"<<endl;
cout<<"Eat the egg    Save it and find something else"<<endl;
int eat = 1;
int food = 2;
int choice4;
cin>>choice4;
if(choice4 == eat)
{
cout<<"Of course you can't eat it raw so you now have to make a fire."<<endl;
cout<<"After a long time you finally made a fire and now you put a big flat rock and cooked the egg on it. It tasted good, didn't it? Now you have to find water."<<endl;
cout<<"You start looking for water. Nearly after you start looking, you hear a river and you start walking toward it. After not that long you find the river and you see fish in it"<<endl;
cout<<"Now you regret eating the egg, don't you? You drink some water and go back to you 'camp'."<<endl;
}
else if (choice4 == food)
{
cout<<"You have to go out and find something. You get down of the tree and start looking for something to eat. Nearly after you start looking, you hear a river and you start walking toward it. After not that long you find the river and you see fish in it"<<endl;
cout<<"You managed to catch some fish and drink some water and on the way back you even found berries so you collected some."<<endl;
cout<<"Of course you can't eat the fish raw so you now have to make a fire."<<endl;
cout<<"After a long time you finally made a fire and now you put a big flat rock and cooked the fish on it. It tasted good, didn't it?"<<endl;
cout<<"And you realised that you can try to hatch the egg so you can maby have a friend."<<endl;
cout<<"You put the egg next to the fire and put more sticks so the fire don't run out."<<endl;
cout<<"Now when you ate and drank water you have to find some way to protect yourself."<<endl;
cout<<"You can make armor from some wood and use some leaves to make ghillie suit and some sharp rocks for arrows and knife. After you collect and make the things you thought of now you can start improving your base with spike walls and bigger platform in the trees"<<endl;
cout<<"You just finished with all the work and you're really tired so you go up in the trees. When you wake you hear cracking sound and you thing that the tree is breaking but actually it is the sound of the egg that is hatching. You immediately go down and see the baby getting out of the egg."<<endl;
cout<<"You again are really hungry and have two choices:"<<endl;
cout<<"             (1)                                      (2)"<<endl;
cout<<"Be a monster and eat the baby                  Eat fish again"<<endl;
int baby = 1;
int fish = 2;
int choice5;
cin>>choice5;
if(choice5 == baby)
{
cout<<"You're crazy but you do waht you have to do to survive. Now you have to go drink some water so you have to go to the river either way. So you go drink some water. But what is that you heard. You look around and see a  small bird - a Dodo."<<endl;
cout<<"You're really tired form this fish so you kill the dodo with your spear and take it with you."<<endl;
cout<<"You got to the base with no other encounters so you leave the dead bird in your base."<<endl;
cout<<"After a few days you hear something in front of your base and after a second you see it. And you see that it's not alone - it is a pack of Raptors so you try to defend yourself but you see that they are too strong so you go up the tree and stay there until they leave. But they don't leave they just change so you don't have any choices - you'll either starve to death or get eaten by the Raptors."<<endl;
}
else if(choice5 == fish)
{
cout<<"You're smart and you know that this baby will help you. So you go get some fish for you and for it and drink some water. But what is that you heard. You look around and see a  small bird - a Dodo."<<endl;
cout<<"You're really tired form this fish so you kill the dodo with your spear and take it with you."<<endl;
cout<<"You got to the base with no other encounters and you decide to give some of the bird to the baby and after that you five it the whole bird because it's hungry."<<endl;
cout<<"After a few months the baby is fully grown and it listens to you so you use it to fish with you and defend from other predators."<<endl<<endl;
cout<<"YOU WIN!";
return 0;
}
}
}
else if(shelter2 == choice3)
{
cout<<"You just go ahead and keep searching for different place to sleep through the night."<<endl;
cout<<"You finally find two trees that are close enough and have really thick branches so you collect sticks and leaves and you go you on the tree to rest through the night!"<<endl;
cout<<"You sleep through the night without any problems but in the morning you're really hungry."<<endl;
cout<<"You have to go out and find something. You get down of the tree and start looking for something to eat. Nearly after you start looking, you hear a river and you start walking toward it. After not that long you find the river and you see fish in it"<<endl;
cout<<"Of course you can't eat the fish raw so you now have to make a fire."<<endl;
cout<<"After a long time you finally made a fire and now you put a big flat rock and cooked the fish on it. It tasted good, didn't it?"<<endl;
cout<<"Now when you ate and drank water you have to find some way to protect yourself."<<endl;
cout<<"You can make armor from some wood and use some leaves to make ghillie suit and some sharp rocks for arrows and knife. After you collect and make the things you thought of now you can start improving your base with spike walls and bigger platform in the trees"<<endl;
cout<<"You just finished with all the work and you're really tired so you go up in the trees. Now when you rested good you have to eat and drink some water so you have to go fishing again. So you go get some fish for you and for it and drink some water. But what is that you heard. You look around and see a  small bird - a Dodo."<<endl;
cout<<"You're really tired form this fish so you kill the dodo with your spear and take it with you."<<endl;
cout<<"Unfortunately a Raptor jumps on you from the bushes and because you don't have the chance to fight so you Die!"<<endl;
return 0;
}
}
else if(choice2 == shelter)
{
cout<<"You just go ahead and keep searching for different place to sleep through the night."<<endl;
cout<<"You finally find two trees that are close enough and have really thick branches so you collect sticks and leaves and you go you on the tree to rest through the night!"<<endl;
cout<<"You sleep through the night without any problems but in the morning you're really hungry."<<endl;
cout<<"You have to go out and find something. You get down of the tree and start looking for something to eat. Nearly after you start looking, you hear a river and you start walking toward it. After not that long you find the river and you see fish in it"<<endl;
cout<<"Of course you can't eat the fish raw so you now have to make a fire."<<endl;
cout<<"After a long time you finally made a fire and now you put a big flat rock and cooked the fish on it. It tasted good, didn't it?"<<endl;
cout<<"Now when you ate and drank water you have to find some way to protect yourself."<<endl;
cout<<"You can make armor from some wood and use some leaves to make ghillie suit and some sharp rocks for arrows and knife. After you collect and make the things you thought of now you can start improving your base with spike walls and bigger platform in the trees"<<endl;
cout<<"You just finished with all the work and you're really tired so you go up in the trees. Now when you rested good you have to eat and drink some water so you have to go fishing again. So you go get some fish for you and for it and drink some water. But what is that you heard. You look around and see a  small bird - a Dodo."<<endl;
cout<<"You're really tired form this fish so you kill the dodo with your spear and take it with you."<<endl;
cout<<"Unfortunately a Raptor jumps on you from the bushes and because you don't have the chance to fight so you Die!"<<endl;
return 0;
}
}

else if(choice == surrender)
{
cout<<"You surrender and the guard catches you. They bring you to the company's boss. He tells you that he can't let you out with the information you have, of course you promise him that you won't tell anybody anything but he tells you that he has already heard this. After a short time in silence he tells you that you will be kept in cell until they find a way to delete you memory without killing you."<<endl;
cout<<"YOU LOSE";
return 0;
}
}
else if(choice == backdoor)
{
cout<<"You entered the back door!"<<endl;
cout<<"You start walking along the corridor and don't hear anyone."<<endl;
cout<<"But suddenly you hear footsteps from the left turn of the corridor. You can't continue because they will see you."<<endl;
cout<<"You have to go back and try another night."<<endl;
return 0;
}
return 0;
}
