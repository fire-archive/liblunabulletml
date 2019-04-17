// Copyright (c) 2007-2017 Juan Linietsky, Ariel Manzur.
// Copyright (c) 2014-2017 Godot Engine contributors (cf. AUTHORS.md)

// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:

// The above copyright notice and this permission notice shall be included in all
// copies or substantial portions of the Software.

// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
// SOFTWARE.

// -- Godot Engine <https://godotengine.org>

// Major portions from the main source file of fbx2glTF.
// See licenses.

#include <Godot.hpp>
#include <Mesh.hpp>
#include <MeshInstance.hpp>
#include <Quat.hpp>
#include <ResourceLoader.hpp>
#include <Skeleton.hpp>
#include <SurfaceTool.hpp>
#include <Texture.hpp>
#include <core/GodotGlobal.hpp>
#include <core/String.hpp>
#include <gen/Animation.hpp>
#include <gen/ArrayMesh.hpp>
#include <gen/EditorFileSystem.hpp>
#include <gen/EditorPlugin.hpp>
#include <gen/EditorSceneImporter.hpp>
#include <gen/Node.hpp>
#include <gen/Object.hpp>
#include <gen/Reference.hpp>

#include "Engine.hpp"
#include <Godot.hpp>
#include <ImageTexture.hpp>
#include <PoolArrays.hpp>
#include <ProjectSettings.hpp>
#include <Skeleton.hpp>
#include <SpatialMaterial.hpp>

#include <algorithm>

using namespace godot;

// clang-format off
#include <Reference.hpp>
#include <Godot.hpp>

#include <fstream>
#include <iostream>
#include <map>
#include <unordered_map>
#include <vector>

#include "libluna.bulletml.h"
#include <Animation.hpp>
#include <Directory.hpp>
#include <EditorSceneImporter.hpp>
#include <File.hpp>
#include <ProjectSettings.hpp>
#include <Ref.hpp>
#include <EditorFileSystem.hpp>
#include <Vector3.hpp>
#include <Engine.hpp>
// clang-format on

bool verboseOutput = false;

using namespace godot;
using godot::Directory;
using godot::Ref;

void LunaBulletml::_register_methods() {
}
