# XYZ / STL Image Processor

## Getting Started


### Prerequisites

- Python 3.0+
- Blender
- bpy (Blender python module)

### Install
Download Blender
```
https://www.blender.org/download/
```
Install bpy
```
pip install bpy
```

### Data

Create a folder `data` under `xyz_stl_processor`

```
mkdir -p data/
```
And drag images you want to process into folder `data`

## Procedure
Clone or download the folder `xyz_stl_processor` and go to the diretory
```
cd ~/<your_directory>/xyz_stl_processor
```

## Directory Layout
The directory layout should be like
```
xyz_stl_processor
    ├── ...
    ├── processor.py
    ├── data                    # data folder (contain train unprocessed and processed images)
    │   ├── image1.xyz
    │   ├── image1.stl
    │   └── ...
    │                                            
    ├── io_mesh_xyz.zip  
    └── ...
```


## Running Processor

```
/Applications/Blender/blender.app/Contents/MacOS/blender --b --python ~/<your_directory>/xyz_stl_processor/processor.py
```

The output files will be in `data` folder




