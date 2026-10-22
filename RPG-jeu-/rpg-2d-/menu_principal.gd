
extends Node2D

func _on_boutton_nouvelle_partie_pressed() -> void:
	get_tree().change_scene_to_file("res://monde.tscn")

func _on_bouton_continuer_pressed() -> void:
	get_tree().change_scene_to_file("res://sauvegarde.tscn")
	
func _on_button_quittez_pressed() -> void:
	print("CLIC DETECTE")
	get_tree().quit()	
