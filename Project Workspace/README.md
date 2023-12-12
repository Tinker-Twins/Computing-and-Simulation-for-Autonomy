# A Scalable and Parallelizable Multi-Agent Reinforcement Learning Framework for Cooperative and Competitive Autonomous Vehicles
**Authors:** Tanmay Samak and Chinmay Samak

## SETUP

1. [Download](https://unity.com/download) and [install](https://docs.unity3d.com/hub/manual/InstallHub.html) Unity Hub along with Unity 2021.3.9f1 (LTS) or higher.

2. Install AutoDRIVE Simulator (from source):
     
    - Clone the Clone `AutoDRIVE-Simulator` branch of the `AutoDRIVE` repository:
    
      ```bash
      $ git clone --single-branch --branch AutoDRIVE-Simulator https://github.com/Tinker-Twins/AutoDRIVE.git
      ```
    - Unzip source files larger than 100 MB:
      > ***Note:*** *You may delete the `*.zip` and `*.zip.meta` files after the unzipping operation.*
      - [AutoDRIVE/Assets/Environments/Off-Road Terrain/Terrain Meshes/](https://github.com/Tinker-Twins/AutoDRIVE/tree/AutoDRIVE-Simulator/Assets/Environments/Off-Road%20Terrain/Terrain%20Meshes)
        - [Terrain00.zip](https://github.com/Tinker-Twins/AutoDRIVE/blob/AutoDRIVE-Simulator/Assets/Environments/Off-Road%20Terrain/Terrain%20Meshes/Terrain00.zip)
        - [Terrain01.zip](https://github.com/Tinker-Twins/AutoDRIVE/blob/AutoDRIVE-Simulator/Assets/Environments/Off-Road%20Terrain/Terrain%20Meshes/Terrain01.zip)
        - [Terrain02.zip](https://github.com/Tinker-Twins/AutoDRIVE/blob/AutoDRIVE-Simulator/Assets/Environments/Off-Road%20Terrain/Terrain%20Meshes/Terrain02.zip)
        - [Terrain03.zip](https://github.com/Tinker-Twins/AutoDRIVE/blob/AutoDRIVE-Simulator/Assets/Environments/Off-Road%20Terrain/Terrain%20Meshes/Terrain03.zip)
        - [Terrain04.zip](https://github.com/Tinker-Twins/AutoDRIVE/blob/AutoDRIVE-Simulator/Assets/Environments/Off-Road%20Terrain/Terrain%20Meshes/Terrain04.zip)
        - [Terrain05.zip](https://github.com/Tinker-Twins/AutoDRIVE/blob/AutoDRIVE-Simulator/Assets/Environments/Off-Road%20Terrain/Terrain%20Meshes/Terrain05.zip)
        - [Terrain06.zip](https://github.com/Tinker-Twins/AutoDRIVE/blob/AutoDRIVE-Simulator/Assets/Environments/Off-Road%20Terrain/Terrain%20Meshes/Terrain06.zip)
        - [Terrain07.zip](https://github.com/Tinker-Twins/AutoDRIVE/blob/AutoDRIVE-Simulator/Assets/Environments/Off-Road%20Terrain/Terrain%20Meshes/Terrain07.zip)
        - [Terrain08.zip](https://github.com/Tinker-Twins/AutoDRIVE/blob/AutoDRIVE-Simulator/Assets/Environments/Off-Road%20Terrain/Terrain%20Meshes/Terrain08.zip)
      - [AutoDRIVE/Assets/Environments/Windridge%20City/Scenes](https://github.com/Tinker-Twins/AutoDRIVE/tree/AutoDRIVE-Simulator/Assets/Environments/Windridge%20City/Scenes)
        - [Windridge City.zip](https://github.com/Tinker-Twins/AutoDRIVE/blob/AutoDRIVE-Simulator/Assets/Environments/Windridge%20City/Scenes/Windridge%20City.zip)
      - [AutoDRIVE/Assets/Models/Vehicle/RZR](https://github.com/Tinker-Twins/AutoDRIVE/tree/AutoDRIVE-Simulator/Assets/Models/Vehicle/RZR)
        - [Polaris_RZR.zip](https://github.com/Tinker-Twins/AutoDRIVE/blob/AutoDRIVE-Simulator/Assets/Models/Vehicle/RZR/Polaris_RZR.zip)
        - [Polaris_RZR_Pro_R_4_Sport.zip](https://github.com/Tinker-Twins/AutoDRIVE/blob/AutoDRIVE-Simulator/Assets/Models/Vehicle/RZR/Polaris_RZR_Pro_R_4_Sport.zip)
      - [AutoDRIVE/Assets/Scenes](https://github.com/Tinker-Twins/AutoDRIVE/tree/AutoDRIVE-Simulator/Assets/Scenes)
        - [City.zip](https://github.com/Tinker-Twins/AutoDRIVE/blob/AutoDRIVE-Simulator/Assets/Scenes/City.zip)
        - [Intersection School.zip](https://github.com/Tinker-Twins/AutoDRIVE/blob/AutoDRIVE-Simulator/Assets/Scenes/Intersection%20School.zip)

    - Launch Unity Hub and select `ADD` project button. Navigate to the download directory and select the parent folder of the `AutoDRIVE` repository.
  
    - Launch AutoDRIVE Simulator by running the project.
      > ***Note:*** *It may take several minutes to import and load the project for the first time. Please be patient.*
    
    - Bake lightmaps for [Windridge City](https://github.com/Tinker-Twins/AutoDRIVE/blob/AutoDRIVE-Simulator/Assets/Environments/Windridge%20City/Scenes/Windridge%20City.zip) and [City](https://github.com/Tinker-Twins/AutoDRIVE/blob/AutoDRIVE-Simulator/Assets/Scenes/City.zip) scenes.
      > ***Note:*** *The lightmap baking process may take several minutes/hours depending upon the computational platform.*
  
    - For this project, we'll be working with the [Intersection School](https://github.com/Tinker-Twins/AutoDRIVE/blob/AutoDRIVE-Simulator/Assets/Scenes/Intersection%20School.zip) and [Multi-Agent F1TENTH](https://github.com/Tinker-Twins/AutoDRIVE/blob/AutoDRIVE-Simulator/Assets/Scenes/Multi-Agent%20F1TENTH.unity) scenes. Ensure that you can open and run them.

3. Install ML-Agents Unity Package (tested version: `com.unity.ml-agents v2.0.1`):
   
    The Unity ML-Agents C# SDK is a Unity Package. You can install the `com.unity.ml-agents` package [directly from the Package Manager registry](https://docs.unity3d.com/Manual/upm-ui-install.html). Please make sure to enable 'Preview Packages' in the 'Advanced' dropdown in order to find the latest Preview release of the package.
   
    > ***Note:*** *AutoDRIVE Simulator comes pre-installed with `com.unity.ml-agents v2.0.1`. As such, this step should NOT be necessary. However, in case you face issues importing this Unity package, please consult the [official Unity ML-Agents installation guide](https://github.com/Unity-Technologies/ml-agents/blob/main/docs/Installation.md).*

4. Install ML-Agents Python Package (tested version: `mlagents 0.26.0`):

  - Create a virtual environment (strongly recommended):
	    
    ```bash
    $ conda create --name autodrive python=3.8
    ```
      
  - Activate the environment:
  
    ```bash
    $ conda activate autodrive
    ```

  - Install `mlagents` package from PyPi (this command also installs the required dependencies including PyTorch):
    
    ```bash
    $ python -m pip install mlagents==0.26.0
    ```

    > ***Note:*** *It is strongly recommended that you use packages from the same release together for the best experience. Please consult the [official Unity ML-Agents releases page](https://github.com/Unity-Technologies/ml-agents/releases) for better understanding the version compatibility of different packages.*

## USAGE

### Programming

Every `agent` needs a script inherited from the `Agent` class. This project contains two such `agent` scripts:
- [NigelCrossing](https://github.com/Tinker-Twins/Computing-and-Simulation-for-Autonomy/blob/main/Project%20Workspace/Scripts/NigelCrossing.cs): For collaborative multi-agent intersection traversal.
- [F1TenthRacing](https://github.com/Tinker-Twins/Computing-and-Simulation-for-Autonomy/blob/main/Project%20Workspace/Scripts/F1TenthRacing.cs): For competitive head-to-head autonomous racing.

For defining your own agents, you will first need to import the `Unity.MLAgents` namespace as follows:
```C#
using Unity.MLAgents;
using Unity.MLAgents.Sensors;
using Unity.MLAgents.Actuators;
```

Following are some useful methods from the `Agent` class:

1. `public override void Initialize()`

	Initializes the environment. Similar to `void Start()`.

2. `public override void CollectObservations(VectorSensor sensor)`

	Collects observations. Use `sensor.AddObservation(xyz)` to add observation "xyz".

3. `public override void OnActionReceived(ActionBuffers actions)`

	Map the actions from the `agent` to the actuations be performed by the `actor` using the passed `actions`. You can choose a discrete action space using `actions.DiscreteActions[i]` or a continuous one using `actions.ContinuousActions[i]`. Reward function is also defined in this section using the `SetReward()` method. You can use `if`-`else` cases to define rewards/penalties. Finally, don't forget to call `EndEpisode()` to indicate end of episode.

	> ***Note:*** *It is to be noted that `agent` is an intelligent entity capable of making observations and taking decisions; it can “learn”. On the contrary, `actor` is a physical entity within the environment. It is controlled by an agent. In this context, the terms "agent" and "AI" can go together, much like interchangeably using the terms “actor” and “robot”.*

4. `public override void OnEpisodeBegin()`

	This method is called after `EndEpisode()`. Define your "reset" algorithm here before starting the next episode.

5. `public override void Heuristic(in ActionBuffers actionsOut)`

	Use `actionsOut.DiscreteActions[i]` or `actionsOut.ContinuousActions[i]` to define manual-override controls during `Heuristic Only` behaviour of the agent.

You will need to attach this `agent` script to the agent along with `BehaviourParameters` and `DecisionRequester` scripts inbuilt with the ML-Agents Unity Package (just search their names in `Add Component` dropdown menu of the agent gameobject). Optionally, you may also want to add `DemonstrationRecorder` script for imitation learning or demonstration-guided reinforcement learning. Finally, ML-Agents Unity Package also provides several sensor scripts such as `VectorSensor`, `GridSensor`, `CameraSensor`, `RenderTextureSensor`, `RayPerceptionSensor`, etc., which may come in handy.

### Debugging

After defining your logic, test the functionality by selecting `Heuristic Only` mode in the `Behaviour Type` of the `BehaviourParameters` script attached to the agent. You can manually control the agents to validate observation and action spaces, reward signals, resetting conditions, or complexity of the scenario/behavior in general.

### Training

1. Create a configuration file (`<config>.yaml`) to define training parameters. This project contains two such `config` files:
- [NigelCrossing](https://github.com/Tinker-Twins/Computing-and-Simulation-for-Autonomy/blob/main/Project%20Workspace/Training%20Configurations/NigelCrossing.yaml): For collaborative multi-agent intersection traversal using deep reinforcement learning.
- [F1TenthRacing](https://github.com/Tinker-Twins/Computing-and-Simulation-for-Autonomy/blob/main/Project%20Workspace/Training%20Configurations/F1TenthRacing.yaml): For competitive head-to-head autonomous racing using demonstration-guided deep reinforcement learning.
  > ***Note:*** *The pre-recorded sub-optimal single-agent driving demonstrations (5 laps) for both the agents are located in [Demonstrations](https://github.com/Tinker-Twins/Computing-and-Simulation-for-Autonomy/tree/main/Project%20Workspace/Demonstrations) directory of this project.*

For creating your own training configurations, please refer to the [official training configuration guide](https://github.com/Unity-Technologies/ml-agents/blob/main/docs/Training-Configuration-File.md).

2. Within the `BehaviourParameters` script attached to the agent, give a unique `Behaviour Name` for training purpose. Also configure the observation and action spaces appropriately.
   > ***Note:*** *You must set the `Behavior Type` of all agents to `Default` in order to enable training. The agent(s) will not learn in `Heuristic Only` or `Inference Only` modes.*

3. At this point, you may set the `Decision Period` within the `DecisionRequester` script attached to the agent.

4. Launch an Anaconda Prompt and activate the virtual environment:
  
    ```bash
    $ conda activate autodrive
    ```

5. Navigate to the [Results](https://github.com/Tinker-Twins/Computing-and-Simulation-for-Autonomy/tree/main/Project%20Workspace/Results) directory:
   
   ```bash
    $ cd <path/to/Results>
    ```
   > ***Note:*** *The training results will be stored in this directory. However, you can move/organize them later to avoid overwriting.*

6. Start the training by sourcing the appropriate training configuration (using relative/global path) and `run-id`.
   
   ```bash
   $ mlagents-learn path/to/<config>.yaml --run-id=<Run1>
   ```

7. Hit the `Play` button in Unity Editor to "actually" start the training.

### Training Analysis

1. Navigate to the parent folder of [Results](https://github.com/Tinker-Twins/Computing-and-Simulation-for-Autonomy/tree/main/Project%20Workspace/Results) directory:
   
   ```bash
    $ cd <path/to/parent/folder/of/Results>
    ```

2. Launch TensorBoard to analyze the training results:
   
   ```
   $ tensorboard --logdir Results
   ```

3. Open browser application (tested with Google Chrome) and log on to http://localhost:6006 to view the training results.

> ***Note:*** *You can view the training results "live" as the training happens, or choose to view it after the training is complete.*

### Deployment

1. Navigate to the `Results` directory and locate a folder named after the `<training_behaviour_name>/<run-id>` that you defined while training the agent(s).

2. In the inspector window, attach the saved neural network models (the `*.onnx` files) to the respective `Model` variable in the `BehaviourParameters` script attached to the agent(s).

3. Select `Default` or `Inference Only` mode in the `Behaviour Type` of the `BehaviourParameters` attached to the agent(s).

4. Hit the play button in Unity Editor and watch your agent(s) in autonomous mode!

## IMPORTANT TIPS

1. Craft the reward function carefully; agents can cheat a lot!

2. Tune the training parameters in `<config>`.yaml file.

3. As long as possible, duplicate the training agents/environments within the scene to ensure parallel (faster) training.

    ***Note:*** *Make sure to commit changes (if any) to all the duplicates as well!*
