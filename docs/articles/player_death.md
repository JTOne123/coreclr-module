# OnPlayerDeath
Note : 
##### Death reason could be a WeaponHash too.
##### Events have to be created in a IScript Class! Otherwise it won´t work!

```csharp 
    /* We create our IScript class */
    public class AltV_Wiki : IScript
    {
        /* We Declare & Create our Event handler. */
        [ScriptEvent(ScriptEventType.PlayerDead)]
        public static void OnPlayerDeath(IPlayer player, IPlayer killer, uint reason)
        {
            /* If you killed yourself then it should notify you. */
            if (killer == player) {
                player.SendChatMessage("You killed yourself... :(");
            }
            else
            {
                /* We Notify the Killer & the Player. */
                killer.SendChatMessage("You killed " + player.Name);
                player.SendChatMessage(killer?.Name + " killed you!");
            }
            /* We Spawn the dead player after 1000 MS */
            /* ( 1 Second = 1000 MS ). */
            player.Spawn(new Position(0, 0, 0), 1000);
        }
    }
```
