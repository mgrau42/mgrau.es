<?php
/**
 * The base configuration for WordPress
 *
 * The wp-config.php creation script uses this file during the
 * installation. You don't have to use the web site, you can
 * copy this file to "wp-config.php" and fill in the values.
 *
 * This file contains the following configurations:
 *
 * * MySQL settings
 * * Secret keys
 * * Database table prefix
 * * ABSPATH
 *
 * @link https://wordpress.org/support/article/editing-wp-config-php/
 *
 * @package WordPress
 */

// ** MySQL settings - You can get this info from your web host ** //
/** The name of the database for WordPress */
define( 'DB_NAME', 'database_manudata' );

/** MySQL database username */
define( 'DB_USER', 'database_user' );

/** MySQL database password */
define( 'DB_PASSWORD', '1994' );

/** MySQL hostname */
define( 'DB_HOST', 'localhost' );

/** Database Charset to use in creating database tables. */
define( 'DB_CHARSET', 'utf8' );

/** The Database Collate type. Don't change this if in doubt. */
define( 'DB_COLLATE', '' );

/**#@+
 * Authentication Unique Keys and Salts.
 *
 * Change these to different unique phrases!
 * You can generate these using the {@link https://api.wordpress.org/secret-key/1.1/salt/ WordPress.org secret-key service}
 * You can change these at any point in time to invalidate all existing cookies. This will force all users to have to log in again.
 *
 * @since 2.6.0
 */
define('AUTH_KEY',         't8@Y_y-5>P+3*FjIr<KHm3D+x8PVrMqA_U:AZ.zQJb[a+$[|,U`8[r`Eq9t<veOs');
define('SECURE_AUTH_KEY',  '[yt7}grbB+&5V_q()R[~4qvxO~:mNu9SY-j a}uVENU>U:dRCb<uFbaodXp@hSIU');
define('LOGGED_IN_KEY',    '111%Pu/0<*6,`P+|f#Q}frK<$|ROcds,}d^/z+|w3UO[L_1{^&d}&yI`9*oQ0D{B');
define('NONCE_KEY',        ')0_,NlAw5&d2_en)SX6+E=B>h0 [SH?=MB:FwLvFa>]!|j.2n:TI[Z~GH&NHl+t{');
define('AUTH_SALT',        '*#?!:k2A#5& /n/5y} 1&Ha_mAb>@FxIII/}OV(5DHF-Hq~Y3Oh:;),nl~+v<Dy6');
define('SECURE_AUTH_SALT', 'uH%b)a(ud4^f*E]Yf}3|)a}=y</)*CGY{/_eVBLPNQ2k8Ls<Q|@=jdlK;XgPR2@|');
define('LOGGED_IN_SALT',   ' +2Hcya|y[/v*H5~JgtNM3Qa5s_iYD!M)E,V!Ad:Li=--EsRnVoL5>eU!_+SE=D]');
define('NONCE_SALT',       '| aw(k8lXhN#Vs7+ky+~vT.dDfC;+auQ2TWD{?ag!r@L{+m.Pz`-iY.!<`jM|bv0');

/**#@-*/

/**
 * WordPress Database Table prefix.
 *
 * You can have multiple installations in one database if you give each
 * a unique prefix. Only numbers, letters, and underscores please!
 */
$table_prefix = 'wp_';

/**
 * For developers: WordPress debugging mode.
 *
 * Change this to true to enable the display of notices during development.
 * It is strongly recommended that plugin and theme developers use WP_DEBUG
 * in their development environments.
 *
 * For information on other constants that can be used for debugging,
 * visit the documentation.
 *
 * @link https://wordpress.org/support/article/debugging-in-wordpress/
 */
define( 'WP_DEBUG', false );

/* That's all, stop editing! Happy publishing. */

/** Absolute path to the WordPress directory. */
if ( ! defined( 'ABSPATH' ) ) {
	define( 'ABSPATH', __DIR__ . '/' );
}

/** Sets up WordPress vars and included files. */
require_once ABSPATH . 'wp-settings.php';
