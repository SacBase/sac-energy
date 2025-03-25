# SaC Energy Consumption

Measuring the energy consumption (nanoJoules) of SaC programs through RAPL.

## RAPL permissions

Reading RAPL requires slightly elevated permissions.

I suggest adding a new `rapl` group.

```bash
sudo addgroup rapl
sudo usermod -aG rapl $(whoami)
```

And then adding the necessary entries to `/etc/sysfs.conf` for the available
packages. (Requires `sysfsutils` to be installed.)

```bash
mode class/powercap/intel-rapl:0/energy_uj = 0440
owner class/powercap/intel-rapl:0/energy_uj = root:rapl
```
