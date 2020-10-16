cmd_net/ipv6/ip6_tunnel.ko := ld -r  -EL  --build-id  -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds -o net/ipv6/ip6_tunnel.ko net/ipv6/ip6_tunnel.o net/ipv6/ip6_tunnel.mod.o;  true
