#include "offsets.h"

/*
 * ----------------------------------------------------------------------------
 * This file is part of unknowncheats.me free knowledge
 * ----------------------------------------------------------------------------
 *
 * Copyright (c) 2023 by Fer3on
 *
 * The offsets are based on or inspired by code from UnKnoWnCheaTs.me threads
 * (https://www.unknowncheats.me/) and Fer3on.
 *
 * ----------------------------------------------------------------------------
 */

namespace offsets {
    // GAME
    const std::uint32_t GWorld = 0x6FD96F8;
    const std::uint32_t GNames = 0x6E61180;
    const std::uint32_t GOBJECT = 0x6E79B00;

    // Launcher
    const std::uint32_t Launcher_GWorld = 0x6FD45B8;
    const std::uint32_t Launcher_GNames = 0x6E5C000;
    const std::uint32_t Launcher_GOBJECT = 0x6E74980;

    // WORLD
    const std::uint32_t OwningGameInstance = 0x0220;
    const std::uint32_t PersistentLevel = 0x0030;
    const std::uint32_t OwningActor = 0x0098;
    const std::uint32_t MaxPacket = 0x00A0;
    const std::uint32_t LocalPlayers = 0x0038;

    // PLAYER
    const std::uint32_t PlayerController = 0x0030;
    const std::uint32_t AcknowledgedPawn = 0x02C0;
    const std::uint32_t PlayerState = 0x0248;
    const std::uint32_t RootComponent = 0x0138;
    const std::uint32_t PlayerCameraManager = 0x02D8;
    const std::uint32_t CameraCachePrivate = 0x1c70;
    const std::uint32_t RelativeLocation = 0x11c + 0x144;
    const std::uint32_t RelativeRotation = 0x128;
    const std::uint32_t ComponentVelocity = 0x140;
    const std::uint32_t ActorID = 0x18;
    const std::uint32_t BoneArray = 0x598;
    const std::uint32_t ComponentToWorld = 0x250;
    const std::uint32_t Mesh = 0x288;
    const std::uint32_t StaticMesh = 0x588;

    // ACTOR
    const std::uint32_t PlayerNamePrivate = 0x310;
    const std::uint32_t NickName = 0x3f8;
    const std::uint32_t SolarPlayerID = 0x3e8;
    const std::uint32_t UserId = 0x418;
    const std::uint32_t PlayerType = 0xc4a;
    const std::uint32_t CurrentCharacterStateInGame = 0x639;
    const std::uint32_t Team = 0xb98;
    const std::uint32_t TeamID = 0x240;
    const std::uint32_t bIsSameTeamWithLocalPlayer = 0x6da;
    const std::uint32_t CurrentHealth = 0x5d8;
    const std::uint32_t MaxHealth = 0x5dc;
    const std::uint32_t CurrShieldValue = 0x1180;
    const std::uint32_t MaxShieldValue = 0x1174;
    const std::uint32_t CurrShieldLevel = 0x1188;
    const std::uint32_t bIsDeathVerge = 0xf94;
    const std::uint32_t bIsCrouched = 0x330;
    const std::uint32_t Controller = 0x0260;
    const std::uint32_t AccountFlag = 0x63c;
    const std::uint32_t KillNum = 0x7c0;
    const std::uint32_t OS = 0x6a8;
    const std::uint32_t SpectatorNum = 0x610;
    const std::uint32_t CharacterId = 0x3a8;
    const std::uint32_t SkinId = 0x3ac;

    // Weapon Config
    const std::uint32_t CachedCurrentWeapon = 0x1c28;
    const std::uint32_t RecoilComponent = 0xd70;
    const std::uint32_t USingleWeaponConfig = 0x500;
    const std::uint32_t UWeaponShootConfig = 0x718;
    const std::uint32_t WeaponConfig = 0x00D0;
    
    // Weapon Config Additional
    const std::uint32_t PrimaryAmmo = 0x280;
    const std::uint32_t SecondaryAmmo = 0x290;
    const std::uint32_t WeaponType = 0x35;
    const std::uint32_t PrimaryAmmoCap = 0x28c;
    const std::uint32_t CurrentClipAmmo = 0x110;
    const std::uint32_t InitSpeed = 0xe0;
    const std::uint32_t ProjectileMaxGravity = 0x500;
    const std::uint32_t WeaponTextType = 0x6d8;

    // Vehicle Config
    const std::uint32_t BestInteractingVehicle = 0x9a8;
    const std::uint32_t SeatSlots = 0x378;
    const std::uint32_t VehicleWeaponConfig = 0x00D0;
    const std::uint32_t VehicleConfig = 0x500;
    const std::uint32_t VehicleRecoilComponent = 0x1118;

    // ITEMS
    const std::uint32_t WeaponItemData = 0x0B58;
    const std::uint32_t ItemData = 0x268;
    const std::uint32_t itemID = 0x0c;
    const std::uint32_t itemName = 0x18;
    const std::uint32_t ItemType = 0x4c;
    const std::uint32_t itemQuality = 0x50;
}
