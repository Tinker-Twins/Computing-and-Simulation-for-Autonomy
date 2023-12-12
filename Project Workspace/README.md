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

Every `agent` needs a script inherited from the `Agent` class. Following are some of the useful methods:

1. `public override void Initialize()`

	Initializes the environment. Similar to `void Start()`.

2. `public override void CollectObservations(VectorSensor sensor)`

	Collects observations. Use `sensor.AddObservation(xyz)` to add observation "xyz".

3. `public override void OnActionReceived(float[] vectorAction)`

	Define the actions to be performed using the passed `vectorAction`. Reward function is also defined here. You can use `if`-`else` cases to define rewards/penalties. Don't forget to call `EndEpisode()` to indicate end of episode.

4. `public override void OnEpisodeBegin()`

	This is called when `EndEpisode()` is called. Define your "reset" algorithm here before starting the next episode.

5. `public override void Heuristic(float[] actionsOut)`

	Use `actionsOut[i]` to define manual controls during `Heuristic Only` behaviour.

Attach this script to the agent along with `BehaviourParameters` and `DecisionRequester` scripts inbuilt with the ML-Agents Unity Package (just search their names in `Add Component` dropdown menu of the agent gameobject).

### Debugging

After defining your logic, test the functionality by selecting `Heuristic Only` in the `Behaviour Type` of the `BehaviourParameters` attached to the agent.

### Training

1. Create a configuration file (`<config>.yaml`) to define training parameters. For details, refer the [official training configuration guide](https://github.com/Unity-Technologies/ml-agents/blob/master/docs/Training-Configuration-File.md).

    ***Note:*** *Two configuration files are provided: `C-MARL.yaml` and `NC-MARL.yaml` for cooperative and non-cooperative multi-agent motion planning, respectively.*

2. Within the `BehaviourParameters` script attached to the agent, give a unique `Behaviour Name` for training purpose.

3. Activate the `ML-Agents` environment:
  
    ```bash
    $ conda activate ML-Agents
    ```

4. Navigate to the Unity ML-Agents Repository directory:
   
   ```bash
    $ cd <path/to/unity-ml-agents/repository>
    ```

5. Start the training.
   
   ```bash
   $ mlagents-learn <path/to/config>.yaml --run-id=<Run1>
   ```

6. Hit the `Play` button in Unity Editor to "actually" start the training.

### Training Analysis

1. Navigate to the Unity ML-Agents Repository directory:
   
   ```bash
    $ cd <path/to/unity-ml-agents/repository>
    ```

2. Launch TensorBoard to analyze the training results:
   
   ```
   $ tensorboard --logdir results
   ```

3. Open browser application (tested with Google Chrome) and log on to http://localhost:6006 to view the training results.

### Deployment

1. Navigate to the Unity ML-Agents Repository directory and locate a folder called `results`.

2. Open the `results` folder and locate a folder named after the `<training_behaviour_name>` that you used while training the agent(s).

3. Copy the saved neural network models (the `*.nn` files) into the `TF Models` folder of the `MARL Simulator` Unity Project.

4. In the inspector window, attach respective NN model(s) to the `Model` variable in the `BehaviourParameters` script attached to the agent(s).

5. Select `Inference Only` in the `Behaviour Type` of the `BehaviourParameters` attached to the agent(s).

6. Hit the play button in Unity Editor and watch your agent(s) play!

## IMPORTANT TIPS

1. Craft the reward function carefully; agents cheat a lot!

2. Tune the training parameters in `<config>`.yaml file.

3. As long as possible, duplicate the training arenas within the scene to ensure parallel (faster) training.

    ***Note:*** *Make sure to commit changes (if any) to all the duplicates as well!*
