cmd_net/ipv4/xfrm4_tunnel.ko := ld -r  -EL  --build-id  -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds -o net/ipv4/xfrm4_tunnel.ko net/ipv4/xfrm4_tunnel.o net/ipv4/xfrm4_tunnel.mod.o;  true
