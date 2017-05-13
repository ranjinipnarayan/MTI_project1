# MTI_project1
## Stress Ball Clock 

#### Concept
I am really interested in the path to reducing stress. A lot of times, we don't really what makes us the most stressed. I believe that in order to reduce the stress you feel, you should know what makes you feel the most stressed out. That is why I built a stress clock. It charts out how stressed you are as a function of time so that you can look at it at the end of the day and reflect on what activities lead to the most stress. 

#### How the system works
I came up with a couple ideas on how to implement this system. The one that seemed to make the most sense was one that used a stress ball an FSR, a solenoid and a stepper motor. I liked the idea of using a stress ball because it is a very passive action but you can use it to get a lot of information. As a user presses down on the stress ball, a solenoid is triggered to push up on a PlayDoh "clock" that moves on a stepper motor as time goes by. I used PlayDoh because I liked how temporary it is. After everyday, you can just remould it and start over. I thought it would be cathartic to actually erase the stress of the day. 

#### Putting the system together
1. I cut a stress ball in half and placed the FSR in. I soldered longer wires on to the FSR so the system could be a little more flexible. I connected the FSR in to an Arduino Uno so it could read pressure values from the sensor 
![alt text](https://github.com/ranjinipnarayan/MTI_project1/blob/master/process_photos/IMG_7678.jpg "OG Stressball")
![alt text](https://github.com/ranjinipnarayan/MTI_project1/blob/master/process_photos/IMG_7679.jpg "Cut in Half")
![alt text](https://github.com/ranjinipnarayan/MTI_project1/blob/master/process_photos/IMG_7680.jpg "With FSR")
![alt text](https://github.com/ranjinipnarayan/MTI_project1/blob/master/process_photos/IMG_7683.jpg "with Arduino")

This is a video of the stress ball reading values 
<a href="http://www.youtube.com/watch?feature=player_embedded&v=GFsx6ow4bpE
" target="_blank"><img src="http://img.youtube.com/vi/GFsx6ow4bpE/0.jpg" 
alt="stress ball reading values" width="240" height="180" border="10" /></a>

2. This step involved adding the solenoid to the system. I used a transistor to regulate the current going in to the solenoid and arduino. When a user squeezed the the stress ball above a certain pressure threshold, the arduino would send a HIGH signal to the solenoid for 800ms and then send a LOW signal. 

![alt text](https://github.com/ranjinipnarayan/MTI_project1/blob/master/process_photos/IMG_7685.jpg "with solenoid")
This is a video of the stress ball triggering the movement of the solenoid
<a href="http://www.youtube.com/watch?feature=player_embedded&v=6S3GWhMlWwk
" target="_blank"><img src="http://img.youtube.com/vi/6S3GWhMlWwk/0.jpg" 
alt="solenoid" width="240" height="180" border="10" /></a>

3. The final step involved introducing the stepper motor. The code for this was fairly simple. The stepper just incremented it's position every second. 
![alt text](https://github.com/ranjinipnarayan/MTI_project1/blob/master/process_photos/IMG_7686.jpg "stepper")
This is a video of the rotating stepper motor sped up for demoing purposes
<a href="http://www.youtube.com/watch?feature=player_embedded&v=7ftAmnybsrs
" target="_blank"><img src="http://img.youtube.com/vi/7ftAmnybsrs/0.jpg" 
alt="rotating stepper" width="240" height="180" border="10" /></a>

#### Final
This is a video showing the entire process
<a href="http://www.youtube.com/watch?feature=player_embedded&v=zvSgAZro3qA
" target="_blank"><img src="http://img.youtube.com/vi/zvSgAZro3qA/0.jpg" 
alt="final processing" width="240" height="180" border="10" /></a>
