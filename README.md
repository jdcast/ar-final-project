# CreatAR: Collaborative Environment for AR Creation
## Augmented Reality Final Project
AR Final Project

[![Demo Full](https://user-images.githubusercontent.com/2231240/208175894-da900e44-f09a-482a-84a1-aca17d9b5b9a.PNG)](https://drive.google.com/file/d/1BBRPIaMxvhcgZx93SlIhC8-UfwbTPvBf/view?usp=share_link)

[Poster](https://github.com/jdcast/ar-final-project/files/10248592/Poster.pdf)

[Unity Package file](https://drive.google.com/file/d/1oIBZisgyNVfrlU2qs1naoFAHEj-cn8AO/view?usp=sharing)

# Structure
- `Resources` can be found under `ar-final-project/Assets/Resources` whose subdirectories have the following organization:
  - `./HandMenuIconSet`: @wip hand menu icon set for MRTK v2 (not currently in production)
  - `./Resources`: precompiled assets (e.g. PUN2 and unity shader animators/animations)
  - `./Scripts`: contains all scripts written for the project with the following organization:
 
    - `./`: general utility scripts with no particular categorical theme
    - `MeshGeneration`: mesh generation code (e.g. mesh tessellation, 2D mesh generation from 3D points and 3D mesh generation from extrusion of 2D mesh)
    - `./MeshManipulation`: mesh manipulation code (e.g. mesh serializer, mesh saver/loader, mesh sketching)
    - `./MultiUserCapabilities`: multi-user relevant code (e.g. PUN2 game room, lobby, etc.)
    - `./WorlLocking`: integration of Microsoft's WLT
  - `TEMP`: sample unity scene as quick example of mesh deformation and serialization
  - `Textures`: textures/materials
- [`TCP backend`](https://github.com/climbar-ai/back-end/tree/AR_backend)
