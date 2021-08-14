"""my_controller_phyton controller."""

# You may need to import some classes of the controller module. Ex:
#  from controller import Robot, Motor, DistanceSensor
from controller import Robot
def delay(time_milisec):
    timeValue = time_milisec/1000.0;
    initTime = robot.getTime()
    timeLeft = 0.00
    while (timeLeft < timeValue):
        currentTime = robot.getTime()
        timeLeft = currentTime - initTime
        robot.step(timestep)
# create the Robot instance.
robot = Robot()

# get the time step of the current world.
timestep = int(robot.getBasicTimeStep())

motorEsquerdo = robot.getDevice('left wheel motor')
motorDireito = robot.getDevice('right wheel motor')

motorEsquerdo.setPosition (float('+inf'))
motorDireito.setPosition (float('+inf'))


# Main loop:
# - perform simulation steps until Webots is stopping the controller
while robot.step(timestep) != -1:
      motorEsquerdo.setVelocity(6.28)
      motorDireito.setVelocity(6.28)
      
      delay (1900)
      
      motorEsquerdo.setVelocity(1)
      motorDireito.setVelocity(-1)
      
      delay (2185)
      
      motorEsquerdo.setVelocity(6.28)
      motorDireito.setVelocity(6.28)
      
      delay (1900)
      
      motorEsquerdo.setVelocity(1)
      motorDireito.setVelocity(-1)
      
      delay (2180)
      
      motorEsquerdo.setVelocity(6.28)
      motorDireito.setVelocity(6.28)
      
      delay (1900)
      
      motorEsquerdo.setVelocity(1)
      motorDireito.setVelocity(-1)
      
      delay (2180)
      
      motorEsquerdo.setVelocity(6.28)
      motorDireito.setVelocity(6.28)
      
      delay (1900)
      
      motorEsquerdo.setVelocity(1)
      motorDireito.setVelocity(-1)
      
      delay (2180)
      
      break
      