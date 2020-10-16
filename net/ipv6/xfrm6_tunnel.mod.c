#include <linux/build-salt.h>
#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

BUILD_SALT;

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(.gnu.linkonce.this_module) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0xe9942317, "module_layout" },
	{ 0x2680385, "kmem_cache_destroy" },
	{ 0x1365b114, "xfrm6_tunnel_deregister" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0x94d5774d, "xfrm_unregister_type" },
	{ 0x2b5ab97d, "_raw_spin_lock_bh" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x28aa6a67, "call_rcu" },
	{ 0x65e2bb05, "unregister_pernet_subsys" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0xbb9f1908, "kmem_cache_free" },
	{ 0xf68b0045, "skb_push" },
	{ 0xc1e58a5f, "refcount_dec_and_test_checked" },
	{ 0x60a8ec3a, "xfrm_state_flush" },
	{ 0xb0304352, "xfrm_register_type" },
	{ 0x4007496c, "kmem_cache_alloc" },
	{ 0x8f3625fe, "_raw_spin_unlock_bh" },
	{ 0xb041ec8d, "register_pernet_subsys" },
	{ 0x4c0e8130, "kmem_cache_create" },
	{ 0x9483e3c0, "xfrm6_rcv_spi" },
	{ 0x659ded26, "xfrm_flush_gc" },
	{ 0x31b9195c, "__local_bh_disable_ip" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x1ee8d6d4, "refcount_inc_checked" },
	{ 0x20ddad21, "xfrm6_tunnel_register" },
};

MODULE_INFO(depends, "tunnel6,ipv6");


MODULE_INFO(srcversion, "721607F64C5B0E402A23B91");
