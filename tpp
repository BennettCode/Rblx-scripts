-- Var --

local plyrpos = game.Players.LocalPlayer.Character.HumanoidRootPart

-- Instances -- 

local ScreenGui = Instance.new("ScreenGui")
local Frame = Instance.new("Frame")
local TextBox = Instance.new("TextBox")
local UICorner = Instance.new("UICorner")
local UICorner_2 = Instance.new("UICorner")

--Properties -- 

ScreenGui.Parent = game:GetService('CoreGui')
ScreenGui.ZIndexBehavior = Enum.ZIndexBehavior.Sibling

Frame.Parent = ScreenGui
Frame.BackgroundColor3 = Color3.fromRGB(42, 42, 42)
Frame.BackgroundTransparency = 0.300
Frame.Position = UDim2.new(0.395604402, 0, 0.857668757, 0)
Frame.Size = UDim2.new(0, 266, 0, 74)

TextBox.Parent = Frame
TextBox.BackgroundColor3 = Color3.fromRGB(132, 8, 255)
TextBox.BackgroundTransparency = 0.300
TextBox.Position = UDim2.new(0.0488721803, 0, 0.162162155, 0)
TextBox.Size = UDim2.new(0, 241, 0, 50)
TextBox.Font = Enum.Font.SourceSans
TextBox.Text = "Players Name Here"
TextBox.TextColor3 = Color3.fromRGB(255, 255, 255)
TextBox.TextSize = 31.000
TextBox.TextWrapped = true

UICorner.Parent = TextBox

UICorner_2.Parent = Frame

-- Scripts --

local function EIME_fake_script() -- TextBox.LocalScript 
	local script = Instance.new('LocalScript', TextBox)

	script.Parent.FocusLost:Connect(function(value)
		function tp()
			local value1 = script.Parent.Text 
			local newpos = game.Players[value1].Character.HumanoidRootPart
			plyrpos.CFrame = newpos.CFrame
		end
		if value then
			tp()
		end
	end)
	
end
coroutine.wrap(EIME_fake_script)()
local function DEVSE_fake_script() -- Frame.LocalScript 
	local script = Instance.new('LocalScript', Frame)

	local frame = script.Parent
	
	if frame then
		frame.Draggable = true
		frame.Active = true
		frame.Selectable = true
	end
end
coroutine.wrap(DEVSE_fake_script)()
