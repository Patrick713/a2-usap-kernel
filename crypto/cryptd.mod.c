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
	{ 0x1b02aeb, "crypto_alloc_skcipher" },
	{ 0xf4610713, "kmalloc_caches" },
	{ 0x2f1dd18a, "ahash_register_instance" },
	{ 0x73d794a4, "shash_attr_alg" },
	{ 0x7ed5fd24, "crypto_mod_put" },
	{ 0x79929b9b, "crypto_dequeue_request" },
	{ 0x9a11a0fc, "crypto_attr_alg_name" },
	{ 0x25bfcb6a, "shash_ahash_digest" },
	{ 0xde54b964, "crypto_grab_skcipher" },
	{ 0x27a9bdc5, "crypto_unregister_template" },
	{ 0x50c89f23, "__alloc_percpu" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x7493254d, "crypto_shash_final" },
	{ 0xaec6baec, "shash_ahash_finup" },
	{ 0xe214e31, "skcipher_register_instance" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0xcf3fac84, "cpumask_next" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x5f754e5a, "memset" },
	{ 0x4b5954d3, "crypto_grab_aead" },
	{ 0x1e96f43d, "__cpu_possible_mask" },
	{ 0xc5850110, "printk" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x4178df23, "crypto_register_template" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xc1e58a5f, "refcount_dec_and_test_checked" },
	{ 0xd6994983, "crypto_shash_setkey" },
	{ 0x499043d3, "crypto_init_queue" },
	{ 0x5da731d, "crypto_drop_spawn" },
	{ 0x8b2bc06d, "crypto_aead_setkey" },
	{ 0xfdbd7a17, "crypto_get_attr_type" },
	{ 0x55affe0a, "crypto_enqueue_request" },
	{ 0xdfd3ce3b, "crypto_skcipher_decrypt" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xae6283c2, "crypto_destroy_tfm" },
	{ 0xebaa9dc8, "kmem_cache_alloc_trace" },
	{ 0x341dbfa3, "__per_cpu_offset" },
	{ 0xe82bfbf1, "crypto_aead_setauthsize" },
	{ 0x4d4ce517, "crypto_alloc_aead" },
	{ 0x31b9195c, "__local_bh_disable_ip" },
	{ 0xc4b25829, "crypto_spawn_tfm2" },
	{ 0x3c939546, "crypto_init_shash_spawn" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0xb8e2d466, "shash_ahash_update" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0xc358aaf8, "snprintf" },
	{ 0x1ee8d6d4, "refcount_inc_checked" },
	{ 0x6767ee88, "shash_no_setkey" },
	{ 0x8a331d2b, "param_ops_uint" },
	{ 0x565379a3, "aead_register_instance" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0x7dbc831f, "crypto_alloc_ahash" },
	{ 0xa36ae624, "crypto_skcipher_encrypt" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "B92958244A46F1B5220BCEF");
