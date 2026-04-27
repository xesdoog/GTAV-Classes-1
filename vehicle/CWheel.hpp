#pragma once

#include "CHandlingData.hpp"
#include "CVehicle.hpp"

enum eWheelId
{
	WHEEL_LF,
	WHEEL_RF,
	WHEEL_LM,
	WHEEL_RM,
	WHEEL_LR,
	WHEEL_RR,
	WHEEL_BIKE_F,
	WHEEL_BIKE_R
};

enum eWheelDynamicFlags
{
	HIT,
	HIT_LAST,
	ON_GAS,
	ON_FIRE,
	CHEAT_TC,
	CHEAT_SC,
	CHEAT_GRIP_1,
	CHEAT_GRIP_2,
	BURNOUT,
	BURNOUT_2,
	IN_WATER,
	SUBMERGED,
	TYRES_HEAT_UP,
	ABS_ACTIVE,
	ABS_UNK,
	ABS_ALT,
	CRUSHING_PED,
	REDUCE_GRIP,
	TELEPORTED,
	RESET,
	BROKEN_OFF,
	FULL_THROTTLE,
	SIDE_IMPACT,
	UNK_23,
	UNK_24,
	NO_LATERAL_SPRING,
	WITHIN_DAMAGE_REGION,
	WITHIN_DAMAGE_REGION_2,
	ON_PAVEMENT,
	UNK_29,
	FORCE_NO_SLEEP,
	SLEEPING_ON_DEBRIS,
};

enum eWheelConfigFlags
{
	BIKE_WHEEL,
	LEFT_WHEEL,
	REAR_WHEEL,
	STEERED,
	POWERED,
	TILT_INDEPENDENT,
	TILT_SOLID,
	BIKE_CONSTRAINED_COLLIDER,
	BIKE_FALLEN_COLLIDER,
	INSTANCED,
	DONT_RENDER_STEER,
	UPDATE_SUSPENSION,
	QUAD_WHEEL,
	HIGH_FRICTION_WHEEL,
	DONT_REDUCE_GRIP_ON_BURNOUT,
	IS_PHYSICAL,
	BICYCLE_WHEEL,
	TRACKED_WHEEL,
	PLANE_WHEEL,
	DONT_RENDER_HUB,
	SPOILER_MOD,
	ROTATE_BOUNDS,
	EXTEND_ON_SUSPENSION_UPDATE,
	CENTER_WHEEL,
	AMPHIBIOUS_WHEEL,
	RENDER_WITH_ZERO_COMPRESSION
};

#pragma pack(push, 1)
class CWheel
{
public:
	char pad_0000[271]; //0x0000
	int8_t m_parallel_wheel_index; //0x010F
	float m_tyre_radius; //0x0110
	float m_rim_radius; //0x0114
	float m_unk_rim_radius; //0x0118
	float m_tyre_width; //0x011C
	class CHandlingData *m_handling_data; //0x0120
	class CVehicle *m_vehicle; //0x0128
	float m_suspension_length; //0x0130
	float m_max_suspension_travel; //0x0134
	float m_rest_position; //0x0138
	float m_rest_position_2; //0x013C
	float m_unk_0140; //0x0140
	float m_accel_mass_mult; //0x0144
	float m_unk_0148; //0x0148
	float m_suspension_raise; //0x014C
	float m_unk_suspension_raise; //0x0150
	float m_suspension_fwd_offset; //0x0154
	int32_t m_hydraulic_state; //0x0158
	int32_t m_hydraulic_state_2; //0x015C
	float m_suspension_compression; //0x0160
	float m_suspension_compression_2; //0x0164
	float m_wheel_compression; //0x0168
	float m_rotation_angle; //0x016C
	float m_rotation_speed; //0x0170
	float m_unk_0174; //0x0174
	float m_tyre_temperature; //0x0178
	char pad_017C[108]; //0x017C
	float m_suspension_health; //0x01E8
	float m_tyre_health; //0x01EC
	float m_tyre_wear_mult; //0x01F0
	float m_tyre_wear_unk; //0x01F4
	char pad_01F8[8]; //0x01F8
	uint32_t m_dynamic_flags; //0x0200
	uint32_t m_config_flags; //0x0204
	char pad_0208[3]; //0x0208
	bool m_tyre_is_burst; //0x020B
	bool m_unk_020C; //0x020C
	bool m_has_hydraulics; //0x020D
}; //Size: 0x020E
static_assert(sizeof(CWheel) == 0x20E);
#pragma pack(pop)
