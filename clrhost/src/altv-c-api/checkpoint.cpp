#include "checkpoint.h"

// Entity

uint16_t Checkpoint_GetID(alt::ICheckpoint* checkpoint) {
    return checkpoint->GetID();
}

void Checkpoint_GetPosition(alt::ICheckpoint* checkpoint, position_t &position) {
    auto checkpointPosition = checkpoint->GetPosition();
    position.x = checkpointPosition.x;
    position.y = checkpointPosition.y;
    position.z = checkpointPosition.z;
}

void Checkpoint_SetPosition(alt::ICheckpoint* checkpoint, alt::Position pos) {
    checkpoint->SetPosition(pos);
}

void Checkpoint_GetRotation(alt::ICheckpoint* checkpoint, rotation_t &rotation) {
    auto checkpointRotation = checkpoint->GetRotation();
    rotation.roll = checkpointRotation.roll;
    rotation.pitch = checkpointRotation.pitch;
    rotation.yaw = checkpointRotation.yaw;
}

void Checkpoint_SetRotation(alt::ICheckpoint* checkpoint, alt::Rotation rot) {
    checkpoint->SetRotation(rot);
}

uint16_t Checkpoint_GetDimension(alt::ICheckpoint* checkpoint) {
    return checkpoint->GetDimension();
}

void Checkpoint_SetDimension(alt::ICheckpoint* checkpoint, uint16_t dimension) {
    checkpoint->SetDimension(dimension);
}

void Checkpoint_GetMetaData(alt::ICheckpoint* checkpoint, const char* key, alt::MValue &val) {
    val = checkpoint->GetMetaData(key);
}

void Checkpoint_SetMetaData(alt::ICheckpoint* checkpoint, const char* key, alt::MValue* val) {
    checkpoint->SetMetaData(key, *val);
}

void Checkpoint_GetSyncedMetaData(alt::ICheckpoint* checkpoint, const char* key, alt::MValue &val) {
    val = checkpoint->GetSyncedMetaData(key);
}

void Checkpoint_SetSyncedMetaData(alt::ICheckpoint* checkpoint, const char* key, alt::MValue* val) {
    checkpoint->SetSyncedMetaData(key, *val);
}

// Checkpoint

bool Checkpoint_IsGlobal(alt::ICheckpoint* checkpoint) {
    return checkpoint->IsGlobal();
}

uint8_t Checkpoint_GetCheckpointType(alt::ICheckpoint* checkpoint) {
    return checkpoint->GetCheckpointType();
}

float Checkpoint_GetHeight(alt::ICheckpoint* checkpoint) {
    return checkpoint->GetHeight();
}

float Checkpoint_GetRadius(alt::ICheckpoint* checkpoint) {
    return checkpoint->GetRadius();
}

void Checkpoint_GetColor(alt::ICheckpoint* checkpoint, rgba_t &color) {
    auto checkpointColor = checkpoint->GetColor();
    color.r = checkpointColor.r;
    color.g = checkpointColor.g;
    color.b = checkpointColor.b;
    color.a = checkpointColor.a;
}
