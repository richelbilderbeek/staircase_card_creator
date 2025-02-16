# Manual staircase card creation

Here are the steps to manually create a staircase card.

## Procedure

### 1. Do the drawing in FreeCAD

- Start FreeCAD
- Click '2D Draft'
- Make sure 'Snap to Grid' is on
- Press `l` and `i` to draw a line
- Click the checkbox 'Continue (N)' to keep drawing lines
- Draw all lines you need
- (optional) Save as [1.FCStd](1.FCStd)

### 2. Export to Autodesk DXF 2D

- In FreeCAD, use `CTRL-A` to select all lines
- Click 'File | Export'
- Save as [2.dxf](2.dxf), keep all standard settings
- (optional) close FreeCAD

### 3. Import in Inkscape

- In Inkscape, open the file [2.dxf](2.dxf)
- Select all lines
- Move all lines to within the drawing area
- (optional) Save as SVG [3.svg](3.svg)

### 4. Add colors

- Click on the lines you want to be half-cut
- Click on 'Fill and stroke', select 'Stroke paint',
  change the color from `000000ff` (black)
  to `ff0000ff` (primary red)
- (optional) Save as SVG [4.svg](4.svg)

### 5. Import in Lightburn
    
- In LightBurn, open SVG [4.svg](4.svg)
- Save as ([5.lbrn](5.lbrn) or) [5.lbrn2](5.lbrn2)

Done!
