extends KinematicBody2D

var velocity = Vector2.ZERO
var move_speed = 480
var gravity = 1290
var jump_force = -720
var is_grounded
onready var raycasts = $raycasts


func _physics_process(delta: float)-> void:
	velocity.y += gravity * delta
	_set_animation()
	_get_input()
	velocity = move_and_slide(velocity)
	is_grounded =_check_is_ground()
	
  

func _get_input():
	velocity.x = 0
	var move_direction = int(Input.is_action_pressed("move_right")) - int(Input.is_action_pressed("move_left"))
	velocity.x = lerp(velocity.x, move_speed * move_direction, 0.2)
	
	if move_direction != 0:
		$textura.scale.x = move_direction

func _input(event: InputEvent) -> void:
	if event.is_action_pressed("jump") and is_grounded:
		velocity.y = jump_force / 2
		
func _check_is_ground():
	for raycast  in raycasts.get_children():
		if raycast.is_colliding():
			return true
	return false

func _set_animation():
	var anime= "idle"
	
	if !is_grounded:
		anime= "jump"
	elif velocity.x != 0:
		anime= "run"
	
	
	if $anime.assigned_animation != anime:
		$anime.play(anime)
