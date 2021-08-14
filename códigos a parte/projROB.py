"""proj_controller controller."""

# You may need to import some classes of the controller module. Ex:
#  from controller import Robot, Motor, DistanceSensor
from controller import Robot

# create the Robot instance.
robot = Robot()

# get the time step of the current world.
timestep = int(robot.getBasicTimeStep())


camera = robot.getDevice('camera0')
camera.enable(timestep)

#DEFININDO O DELAY
def delay(time_milisec):
    timeValue = time_milisec/1000.0;
    initTime = robot.getTime()
    timeLeft = 0.00

    while (timeLeft < timeValue):
        currentTime = robot.getTime()
        timeLeft = currentTime - initTime
        robot.step(timestep)
    

#MOTORES
motor_FL = robot.getDevice('front left wheel')
motor_FR = robot.getDevice('front right wheel')
motor_BL = robot.getDevice('back left wheel')
motor_BR = robot.getDevice('back right wheel')
motor_FL.setPosition(float('inf'))
motor_FR.setPosition(float('inf'))
motor_BL.setPosition(float('inf'))
motor_BR.setPosition(float('inf'))



motor_FL.setVelocity(6.28)
motor_FR.setVelocity(6.28)
motor_BL.setVelocity(6.28)
motor_BR.setVelocity(6.28)

# Main loop:
# - perform simulation steps until Webots is stopping the controller
while robot.step(timestep) != -1:
    # Read the sensors:
    image = camera.getImageArray()
    # display the components of each pixel
    if image[camera.getWidth()/2][camera.getHeight()-1][0] < 100:
        motor_direito.setVelocity(6.28)
        motor_esquerdo.setVelocity(6.28)
    elif image[(camera.getWidth()/2)-15][camera.getHeight()-1][0] < 100:
        motor_direito.setVelocity(6.0)
        motor_esquerdo.setVelocity(-6.0)
    elif image[(camera.getWidth()/2)+15][camera.getHeight()-1][0] < 100:
        motor_direito.setVelocity(-6.0)
        motor_esquerdo.setVelocity(6.0)
   
    pass

# Enter here exit cleanup code.
